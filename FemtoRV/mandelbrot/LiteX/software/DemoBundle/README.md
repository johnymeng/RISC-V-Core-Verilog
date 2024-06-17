Demo bundle firmware for LiteX
===============================

![](raystones_tty.gif)


This firmware for LiteX contains a ROM that bundles small demo programs, that can be used to
test and benchmark different cores. Some of them display graphic effects on the SSD1331
OLED display if it is plugged and configured. Some others (tinyraytracer and mandebrot)
display the result on the OLED screen (if configured) and in the 
console (using ANSI color codes, this makes BIG pixels !).

| demo           | description                            | comments                       |
|----------------|----------------------------------------|--------------------------------|
|tinyraytracer   | raytracer by Dmitry Sololov            | textmode (+ OLED if configured)|
|mandelbrot      | fixed-point Mandelbrot set             | textmode (+ OLED if configured)|
|raystones       | raytracer perf test                    | can be used to benchmark cores |
|oled_test       | tests OLED screen                      | only if OLED configured        |
|oled_riscv_logo | 90-ish rotozoom demo                   | only if OLED configured        |
|oled_julia      | animated Julia set by Sylvain Lefebvre | only if OLED configured        |


tinyraytracer / raystones
-------------------------
It is a C version of Dmitry Sokolov's [tinyraytracer](https://github.com/ssloy/tinyraytracer), adapted to LiteX.
It can be used to benchmark different cores running on LiteX.
Raytracing is interesting for benchmarking cores, because it
massively uses floating point operations, either implemented in
software or by an FPU.

Step 0: synthethize
-------------------
Follow the instructions [here](https://github.com/BrunoLevy/learn-fpga/tree/master/LiteX).
If you have the small OLED display plugged on the ULX3S (reference `SSD1331`), 
you can add the `--with-oled` option to the command line. 

Step 1: compile
---------------
```
$ make LITEX_DIR=<path where you synthesized LiteX>
LEARN_FPGA_DIR=<path where you installed learn-fpga> LITEX_PLATFORM=<platform>
```
(platform corresponds to your FPGA board, it can be for instance radiona_ulx3s).

Alternatively, you can edit `Makefile` and hardwire `LITEX_DIR`, `LEARN_FPGA_DIR` and `LITEX_PLATFORM`.

If everything goes well, this will generate `demo.bin`.

Step 2: execute
---------------

```
$ lxterm --kernel demo.bin /dev/ttyUSBnn
litex> reboot
litex-demo-bundle> tinyraytracer
```
This will display the result in the framebuffer (plug a monitor to the
HDMI video connector), or to the terminal window if SoC was synthesized 
without framebuffer support (this will create BIG pixels !). This is text mode, 
with escape sequences to change the background
color. If you have the small OLED display plugged in and configured, 
you will see also the image on it. 

Alternatively, you can use:
```
litex-demo-bundle> raystones
```
This will compute the image without rendering in the terminal
(rendering in the terminal takes time for some reasons, and if you 
want to compare the performances of cores, you want timings that are
as precise as possible).

Performance is measured in "raystones", i.e. pixels per seconds per
MHz (not an official unit !).

If you have the small SSD1331 OLED screen connected on the ULX3S, and if
you have synthesized LiteX with the flag to support it (`--with-oled`), 
then the firmware comes with other graphic demos, type `help` to see the list.

If you test multiple cores, do not forget to recompile the software:
```
$ make clean all
```

Compilation flags are adapted to the configured core (for instance,
RV32I, RV32IM, RV32IMC, RV32IMFC ...). If it crashes, it may be 
because you executed code compiled with flags that are not supported
by the configured core (for instance, play with femtorv32-petitbateau
that supports RV32IMFC, then switch to femtorv32-quark but load the
software that was compiled for petitbateau).


Other cores with FPU
--------------------

VexRiscV is a more efficient core that optionally has a FPU. To
generate LiteX with VexRiscV and a FPU, you will need to modify a
bit the core definition file (because there is currently no way
of passing the options to generate the FPU), but it is easy:

- edit `litex/litex/soc/cores/cpu/vexriscv_smp/core.py`
- set `dcache_width` and `icache_width` to `64` (lines 52 and 53)
- set `with_fpu` to `True` (line 57)

Then generate LiteX with the `vexriscv_smp` processor (adapt to your own device and sdram module):
```
python3 -m litex_boards.targets.radiona_ulx3s --cpu-type=vexriscv_smp --build --load --device LFE5U-85F --sdram-module AS4C32M16 --with-oled 
```

Recompile the firmware (`make clean all`) and load it (`make terminal` then `reboot`).

RayStones performances of various cores
---------------------------------------

The table below show the "raystones" score (pixel/s/MHz) for several cores.
LUTs and FFs measured on an ULX3S (ECP5) with the following command:

```
python3 -m litex_boards.targets.radiona_ulx3s --cpu-type=xxxx --cpu-variant=yyyy --build --load --device LFE5U-85F --sdram-module AS4C32M16
```
TODO: need to recompute the stats with framebuffer active and AS4C16M16


 | core                 | instr set  | raystones |  total LUTs | total FFs   | 
 |----------------------|------------|-----------|-------------|-------------|
 | serv                 | rv32i      |   0.111   |  3381       |  2664       |
 |                      |            |           |             |             |
 | picorv32-minimal     | rv32i      |   1.45    |  4333       |  3320       |
 | picorv32-standard    | rv32im     |   2.352   |  5974       |  4632       |
 |                      |            |           |             |             | 
 | femtorv-quark        | rv32i      |   1.99    |  3721       |  2898       | 
 | femtorv-electron     | rv32im     |   3.373   |  4874       |  3270       | 
 | femtorv-gracilis     | rv32imc    |   3.516   |  5416       |  3528       | 
 | femtorv-petitbateau  | rv32imfc   |  45.159   |  8677       |  4234       |
 |                      |            |           |             |             | 
 | vexriscv imac        | rv32imac   |   7.987   |  6348       |  5804       |
 | vexriscv_smp         | rv32imafd  | 124.121   |  9792       | 10024       |

(nearly) bare core on ULX3S:

| variant     | LUTs  | FFs   |
|-------------|-------|-------|
| quark       | 1226  | 430   | 
| electron    | 2150  | 802   | 
| gracilis    | 2799  | 1018  | 
| petitbateau | 6197  | 1724  | 

comparing with LiteX numbers, we can deduce that LiteX SOC weights approximatively 2500 LUTs
and 2500 FFs. Then we can measure "raystones density", that is, `raystones/(LUT+FF)*10^6`:

 | core                 | instr set  | raystones |  core LUTs  |  core FFs   | raystones density | 
 |----------------------|------------|-----------|-------------|-------------|-------------------|
 | serv                 | rv32i      |   0.111   |   881       |   164       | 106               |
 |                      |            |           |             |             |                   | 
 | picorv32-minimal     | rv32i      |   1.45    |  1833       |   820       | 546               |
 | picorv32-standard    | rv32im     |   2.352   |  3474       |  2132       | 419               |
 |                      |            |           |             |             |                   | 
 | femtorv-quark        | rv32i      |   1.99    |  1221       |   398       | 1229              | 
 | femtorv-electron     | rv32im     |   3.373   |  2364       |   770       | 1076              | 
 | femtorv-gracilis     | rv32imc    |   3.516   |  2916       |  1028       | 891               | 
 | femtorv-petitbateau  | rv32imfc   |  45.159   |  6177       |  1734       | 5708              |
 |                      |            |           |             |             |                   |  
 | vexriscv imac        | rv32imac   |   7.987   |  3848       |  3304       | 1116              |
 | vexriscv_smp         | rv32imafd  | 124.121   |  7292       |  7524       | 8377              |

(note: since I estimated the weight of the SOC and subtracted it, 
these numbers are probably wrong, especially for SERV that is super
small, and that has probably at least 200 raytsones density I'd have
expected).

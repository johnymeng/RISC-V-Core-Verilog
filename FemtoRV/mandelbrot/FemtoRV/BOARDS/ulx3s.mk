YOSYS_ULX3S_OPT=-DULX3S -q -p "synth_ecp5 -abc9 -top $(PROJECTNAME) -json $(PROJECTNAME).json"
NEXTPNR_ULX3S_OPT=--force --timing-allow-fail --json $(PROJECTNAME).json --lpf BOARDS/ulx3s.lpf \
                  --textcfg $(PROJECTNAME)_out.config --85k --freq 25 --package CABGA381


#######################################################################################################################


ULX3S: ULX3S.firmware_config ULX3S.synth ULX3S.prog

ULX3S.fast: ULX3S.synth ULX3S.prog_fast

ULX3S.synth: FIRMWARE/firmware.hex
	yosys $(YOSYS_ULX3S_OPT) $(VERILOGS)
	nextpnr-ecp5 $(NEXTPNR_ULX3S_OPT)
	ecppack --compress --svf-rowsize 100000 --svf $(PROJECTNAME).svf $(PROJECTNAME)_out.config $(PROJECTNAME).bit

ULX3S.show: FIRMWARE/firmware.hex 
	yosys $(YOSYS_ULX3S_OPT) $(VERILOGS)
	nextpnr-ecp5 $(NEXTPNR_ULX3S_OPT) --gui

ULX3S.prog_fast: # program once (lost if device restarted)
	ujprog $(PROJECTNAME).bit           

ULX3S.prog: # program permanently
	ujprog -j FLASH $(PROJECTNAME).bit  

ULX3S.firmware_config:
	BOARD=ulx3s TOOLS/make_config.sh -DULX3S
	(cd FIRMWARE; make libs)	
	(cd FIRMWARE/FEMTOS; make clean commander.hex)
	
ULX3S.lint:
	verilator -DULX3S -DBENCH --lint-only --top-module $(PROJECTNAME) \
         -IRTL -IRTL/PROCESSOR -IRTL/DEVICES -IRTL/PLL $(VERILOGS)

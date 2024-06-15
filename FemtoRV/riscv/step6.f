step6.v
bench_iverilog.v

--binary

//enables strick warning
-Wall

//doesn't exit on warnings
-Wno-fatal

//multi-threading/parallelization
-j 0

//enable systemverilog assertions
--assert

//dump as fst (compressed version of vcd)
--trace-fst

//dump structs as human readable format
--trace-structs

//all explicit x's are relplaced by constant value at runtime
--x-assign unique

//all veriables are randomly initialized
--x-initial unique
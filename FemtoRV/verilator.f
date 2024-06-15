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
--tract-structs

//all explicit x's are relplaced by constant value at runtime
--x-asign unique

//all veriables are randomly initialized
--x-initial unique

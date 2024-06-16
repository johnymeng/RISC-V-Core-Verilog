// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep12__Syms.h"


VL_ATTR_COLD void Vstep12___024root__trace_init_sub__TOP__0(Vstep12___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"prev_LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_rstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"x10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_rstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"x10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"isALUreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"isALUimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"isSYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"Uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"Iimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"Simm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"Bimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"Jimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rs1Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"rs2Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"rdId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("RegisterBank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+65,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"writeBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"writeBackEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+65,0,"aluIn1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"aluIn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"aluPlus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+72,0,"aluMinus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+74,0,"LT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"LTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"EQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"shifter_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"leftshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"takeBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"PCplusImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"PCplus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"FETCH_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"WAIT_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"FETCH_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("CW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"SLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"reset_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_rstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"slow_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"L0_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"wait_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"L1_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"memPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+90,0,"x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"x5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"x6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"x7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"x8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"x9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"x10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"x11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"x12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"x13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"x14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"x15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"x16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"x17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"x18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"x19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"x20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"x21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"x22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"x23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"x24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"x25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"x26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"x27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"x28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"x29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"x30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"x31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"NOP_CODEOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"ASMerror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+90,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"gp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"a4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"a5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"a6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"a7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"s11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"t4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"t5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"t6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep12___024root__trace_init_top(Vstep12___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_init_top\n"); );
    // Body
    Vstep12___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstep12___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstep12___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep12___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep12___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstep12___024root__trace_register(Vstep12___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstep12___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstep12___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstep12___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstep12___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstep12___024root__trace_const_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep12___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_const_0\n"); );
    // Init
    Vstep12___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep12___024root*>(voidSelf);
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep12___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep12___024root__trace_const_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+89,(0U));
    bufp->fullIData(oldp+90,(0U),32);
    bufp->fullIData(oldp+91,(1U),32);
    bufp->fullIData(oldp+92,(2U),32);
    bufp->fullIData(oldp+93,(3U),32);
    bufp->fullIData(oldp+94,(0x13U),32);
    bufp->fullIData(oldp+95,(4U),32);
    bufp->fullIData(oldp+96,(5U),32);
    bufp->fullIData(oldp+97,(6U),32);
    bufp->fullIData(oldp+98,(7U),32);
    bufp->fullIData(oldp+99,(8U),32);
    bufp->fullIData(oldp+100,(9U),32);
    bufp->fullIData(oldp+101,(0xaU),32);
    bufp->fullIData(oldp+102,(0xbU),32);
    bufp->fullIData(oldp+103,(0xcU),32);
    bufp->fullIData(oldp+104,(0xdU),32);
    bufp->fullIData(oldp+105,(0xeU),32);
    bufp->fullIData(oldp+106,(0xfU),32);
    bufp->fullIData(oldp+107,(0x10U),32);
    bufp->fullIData(oldp+108,(0x11U),32);
    bufp->fullIData(oldp+109,(0x12U),32);
    bufp->fullIData(oldp+110,(0x14U),32);
    bufp->fullIData(oldp+111,(0x15U),32);
    bufp->fullIData(oldp+112,(0x16U),32);
    bufp->fullIData(oldp+113,(0x17U),32);
    bufp->fullIData(oldp+114,(0x18U),32);
    bufp->fullIData(oldp+115,(0x19U),32);
    bufp->fullIData(oldp+116,(0x1aU),32);
    bufp->fullIData(oldp+117,(0x1bU),32);
    bufp->fullIData(oldp+118,(0x1cU),32);
    bufp->fullIData(oldp+119,(0x1dU),32);
    bufp->fullIData(oldp+120,(0x1eU),32);
    bufp->fullIData(oldp+121,(0x1fU),32);
    bufp->fullIData(oldp+122,(0x33U),32);
}

VL_ATTR_COLD void Vstep12___024root__trace_full_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep12___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_full_0\n"); );
    // Init
    Vstep12___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep12___024root*>(voidSelf);
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep12___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep12___024root__trace_full_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_),32);
    bufp->fullIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_),32);
    bufp->fullIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_),32);
    bufp->fullIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC),32);
    bufp->fullIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5]),32);
    bufp->fullIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6]),32);
    bufp->fullIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7]),32);
    bufp->fullIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8]),32);
    bufp->fullIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9]),32);
    bufp->fullIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[10]),32);
    bufp->fullIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[11]),32);
    bufp->fullIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[12]),32);
    bufp->fullIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[13]),32);
    bufp->fullIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[14]),32);
    bufp->fullIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[15]),32);
    bufp->fullIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[16]),32);
    bufp->fullIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[17]),32);
    bufp->fullIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[18]),32);
    bufp->fullIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[19]),32);
    bufp->fullIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[20]),32);
    bufp->fullIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[21]),32);
    bufp->fullIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[22]),32);
    bufp->fullIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[23]),32);
    bufp->fullIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[24]),32);
    bufp->fullIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[25]),32);
    bufp->fullIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[26]),32);
    bufp->fullIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[27]),32);
    bufp->fullIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[28]),32);
    bufp->fullIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[29]),32);
    bufp->fullIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[30]),32);
    bufp->fullIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[31]),32);
    bufp->fullCData(oldp+38,((0x1fU & vlSelf->bench__DOT__uut__DOT__x10)),5);
    bufp->fullBit(oldp+39,((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))));
    bufp->fullIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC),32);
    bufp->fullIData(oldp+41,(vlSelf->bench__DOT__uut__DOT__mem_rdata),32);
    bufp->fullBit(oldp+42,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))));
    bufp->fullIData(oldp+43,(vlSelf->bench__DOT__uut__DOT__x10),32);
    bufp->fullIData(oldp+44,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr),32);
    bufp->fullBit(oldp+45,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+46,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+47,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+48,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+49,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+50,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+51,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+52,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+53,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+54,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullIData(oldp+55,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)),32);
    bufp->fullIData(oldp+56,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+57,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+59,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+63,((7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+64,((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+65,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1),32);
    bufp->fullIData(oldp+66,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2),32);
    bufp->fullIData(oldp+67,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData),32);
    bufp->fullBit(oldp+68,(((~ ((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
                            & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
    bufp->fullIData(oldp+69,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2),32);
    bufp->fullCData(oldp+70,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                        ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                        : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x14U)))),5);
    bufp->fullIData(oldp+71,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus),32);
    bufp->fullQData(oldp+72,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus),33);
    bufp->fullBit(oldp+74,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT));
    bufp->fullBit(oldp+75,((1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+76,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus))));
    bufp->fullIData(oldp+77,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in),32);
    bufp->fullIData(oldp+78,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter),32);
    bufp->fullIData(oldp+79,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift),32);
    bufp->fullIData(oldp+80,(((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                               ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                   ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                       ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                          & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)
                                       : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                          | vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))
                                   : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                       ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter
                                       : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                          ^ vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)))
                               : ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                   ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                       ? (1U & (IData)(
                                                       (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                        >> 0x20U)))
                                       : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT))
                                   : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                       ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift
                                       : ((IData)((0x40000020U 
                                                   == 
                                                   (0x40000020U 
                                                    & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                           ? (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)
                                           : vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus))))),32);
    bufp->fullBit(oldp+81,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch));
    bufp->fullIData(oldp+82,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm),32);
    bufp->fullIData(oldp+83,(((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)),32);
    bufp->fullIData(oldp+84,(((((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
                               | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                               ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
                               : ((0x67U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                   ? (0xfffffffeU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                                   : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)))),32);
    bufp->fullCData(oldp+85,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state),2);
    bufp->fullSData(oldp+86,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt),16);
    bufp->fullBit(oldp+87,(vlSelf->bench__DOT__CLK));
    bufp->fullCData(oldp+88,(vlSelf->bench__DOT__prev_LEDS),5);
}

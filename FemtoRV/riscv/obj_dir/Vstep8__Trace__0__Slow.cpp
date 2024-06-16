// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep8__Syms.h"


VL_ATTR_COLD void Vstep8___024root__trace_init_sub__TOP__0(Vstep8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+72,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"prev_LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+72,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"L0_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+39,0,"isALUreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"isALUimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"isSYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"Uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"Iimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"Simm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"Bimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"Jimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rs1Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"rs2Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"rdId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("RegisterBank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+59,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"writeBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"writeBackEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+59,0,"aluIn1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"aluIn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"FETCH_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"FETCH_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"memPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+74,0,"x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"x5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"x6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"x7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"x8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"x9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"x10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"x11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"x12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"x13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"x14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"x15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"x16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"x17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"x18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"x19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"x20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"x21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"x22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"x23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"x24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"x25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"x26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"x27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"x28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"x29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"x30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"x31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"NOP_CODEOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"ASMerror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+74,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"gp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"a4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"a5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"a6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"a7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"s11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"t4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"t5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"t6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"SLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"slow_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"slow_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep8___024root__trace_init_top(Vstep8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_init_top\n"); );
    // Body
    Vstep8___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstep8___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstep8___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep8___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep8___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstep8___024root__trace_register(Vstep8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstep8___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstep8___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstep8___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstep8___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstep8___024root__trace_const_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep8___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_const_0\n"); );
    // Init
    Vstep8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep8___024root*>(voidSelf);
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep8___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep8___024root__trace_const_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+72,(0U));
    bufp->fullBit(oldp+73,(1U));
    bufp->fullIData(oldp+74,(0U),32);
    bufp->fullIData(oldp+75,(1U),32);
    bufp->fullIData(oldp+76,(2U),32);
    bufp->fullIData(oldp+77,(3U),32);
    bufp->fullIData(oldp+78,(4U),32);
    bufp->fullIData(oldp+79,(5U),32);
    bufp->fullIData(oldp+80,(6U),32);
    bufp->fullIData(oldp+81,(7U),32);
    bufp->fullIData(oldp+82,(8U),32);
    bufp->fullIData(oldp+83,(9U),32);
    bufp->fullIData(oldp+84,(0xaU),32);
    bufp->fullIData(oldp+85,(0xbU),32);
    bufp->fullIData(oldp+86,(0xcU),32);
    bufp->fullIData(oldp+87,(0xdU),32);
    bufp->fullIData(oldp+88,(0xeU),32);
    bufp->fullIData(oldp+89,(0xfU),32);
    bufp->fullIData(oldp+90,(0x10U),32);
    bufp->fullIData(oldp+91,(0x11U),32);
    bufp->fullIData(oldp+92,(0x12U),32);
    bufp->fullIData(oldp+93,(0x13U),32);
    bufp->fullIData(oldp+94,(0x14U),32);
    bufp->fullIData(oldp+95,(0x15U),32);
    bufp->fullIData(oldp+96,(0x16U),32);
    bufp->fullIData(oldp+97,(0x17U),32);
    bufp->fullIData(oldp+98,(0x18U),32);
    bufp->fullIData(oldp+99,(0x19U),32);
    bufp->fullIData(oldp+100,(0x1aU),32);
    bufp->fullIData(oldp+101,(0x1bU),32);
    bufp->fullIData(oldp+102,(0x1cU),32);
    bufp->fullIData(oldp+103,(0x1dU),32);
    bufp->fullIData(oldp+104,(0x1eU),32);
    bufp->fullIData(oldp+105,(0x1fU),32);
    bufp->fullIData(oldp+106,(0x33U),32);
}

VL_ATTR_COLD void Vstep8___024root__trace_full_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep8___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_full_0\n"); );
    // Init
    Vstep8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep8___024root*>(voidSelf);
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep8___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep8___024root__trace_full_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__L0_),32);
    bufp->fullIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__memPC),32);
    bufp->fullIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RegisterBank[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__RegisterBank[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__RegisterBank[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__RegisterBank[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__RegisterBank[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__RegisterBank[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__RegisterBank[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__RegisterBank[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__RegisterBank[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__RegisterBank[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__RegisterBank[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__RegisterBank[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__RegisterBank[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__RegisterBank[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__RegisterBank[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__RegisterBank[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__RegisterBank[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__RegisterBank[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__RegisterBank[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__RegisterBank[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__RegisterBank[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__RegisterBank[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__RegisterBank[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__RegisterBank[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__RegisterBank[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__RegisterBank[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__RegisterBank[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__RegisterBank[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__RegisterBank[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__RegisterBank[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__RegisterBank[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__RegisterBank[31]),32);
    bufp->fullCData(oldp+36,(vlSelf->bench__DOT__uut__DOT__leds),5);
    bufp->fullIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__PC),32);
    bufp->fullIData(oldp+38,(vlSelf->bench__DOT__uut__DOT__instr),32);
    bufp->fullBit(oldp+39,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+40,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+41,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+42,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+43,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+44,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+45,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+46,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+47,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+48,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullIData(oldp+49,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__instr)),32);
    bufp->fullIData(oldp+50,(vlSelf->bench__DOT__uut__DOT__Iimm),32);
    bufp->fullIData(oldp+51,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->bench__DOT__uut__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->bench__DOT__uut__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->bench__DOT__uut__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->bench__DOT__uut__DOT__instr 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+53,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->bench__DOT__uut__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->bench__DOT__uut__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+57,((7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+58,((vlSelf->bench__DOT__uut__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+59,(vlSelf->bench__DOT__uut__DOT__rs1),32);
    bufp->fullIData(oldp+60,(vlSelf->bench__DOT__uut__DOT__rs2),32);
    bufp->fullIData(oldp+61,(vlSelf->bench__DOT__uut__DOT__writeBackData),32);
    bufp->fullBit(oldp+62,(((2U == (IData)(vlSelf->bench__DOT__uut__DOT__state)) 
                            & ((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__instr)) 
                                  | (IData)(vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4))))));
    bufp->fullIData(oldp+63,(vlSelf->bench__DOT__uut__DOT__aluIn2),32);
    bufp->fullIData(oldp+64,(((0x4000U & vlSelf->bench__DOT__uut__DOT__instr)
                               ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__instr)
                                   ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                       ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                          & vlSelf->bench__DOT__uut__DOT__aluIn2)
                                       : (vlSelf->bench__DOT__uut__DOT__rs1 
                                          | vlSelf->bench__DOT__uut__DOT__aluIn2))
                                   : ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                       ? ((0x40000000U 
                                           & vlSelf->bench__DOT__uut__DOT__instr)
                                           ? VL_SHIFTRS_III(32,32,5, vlSelf->bench__DOT__uut__DOT__rs1, (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                           : (vlSelf->bench__DOT__uut__DOT__rs1 
                                              >> (IData)(vlSelf->bench__DOT__uut__DOT__shamt)))
                                       : (vlSelf->bench__DOT__uut__DOT__rs1 
                                          ^ vlSelf->bench__DOT__uut__DOT__aluIn2)))
                               : ((0x2000U & vlSelf->bench__DOT__uut__DOT__instr)
                                   ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                       ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                          < vlSelf->bench__DOT__uut__DOT__aluIn2)
                                       : VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__aluIn2))
                                   : ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                       ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                          << (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                       : ((IData)((0x40000020U 
                                                   == 
                                                   (0x40000020U 
                                                    & vlSelf->bench__DOT__uut__DOT__instr)))
                                           ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                              - vlSelf->bench__DOT__uut__DOT__aluIn2)
                                           : (vlSelf->bench__DOT__uut__DOT__rs1 
                                              + vlSelf->bench__DOT__uut__DOT__aluIn2)))))),32);
    bufp->fullCData(oldp+65,(vlSelf->bench__DOT__uut__DOT__shamt),5);
    bufp->fullCData(oldp+66,(vlSelf->bench__DOT__uut__DOT__state),2);
    bufp->fullIData(oldp+67,(((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                               ? (vlSelf->bench__DOT__uut__DOT__PC 
                                  + (((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->bench__DOT__uut__DOT__instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->bench__DOT__uut__DOT__instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->bench__DOT__uut__DOT__instr 
                                                            >> 0x14U))))))
                               : ((0x67U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__instr))
                                   ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                      + vlSelf->bench__DOT__uut__DOT__Iimm)
                                   : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__PC)))),32);
    bufp->fullBit(oldp+68,(vlSelf->bench__DOT__CLK));
    bufp->fullCData(oldp+69,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->fullBit(oldp+70,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->fullIData(oldp+71,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK),20);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep17__Syms.h"


VL_ATTR_COLD void Vstep17___024root__trace_init_sub__TOP__0(Vstep17___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+118,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"prev_LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+118,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"mem_rstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"RAM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"mem_wordaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+52,0,"isIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"isRAM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"IO_LEDS_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"IO_UART_DAT_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"IO_UART_CNTL_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"uart_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"uart_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"IO_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("CPU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"mem_rstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"isALUreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"isALUimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"isSYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"Uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"Iimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"Simm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"Bimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"Jimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rs1Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"rs2Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"rdId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("RegisterBank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+80,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"writeBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"writeBackEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+80,0,"aluIn1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"aluIn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"aluPlus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+87,0,"aluMinus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+89,0,"LT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"LTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"EQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"shifter_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"leftshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"takeBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"PCplusImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"PCplus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"loadstore_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"mem_byteAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"mem_halfwordAccess",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"LOAD_halfword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"LOAD_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+105,0,"LOAD_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"LOAD_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"STORE_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"FETCH_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"WAIT_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"FETCH_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("CW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"SLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"reset_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"mem_rstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"slow_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"IO_LEDS_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"IO_UART_DAT_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"IO_UART_CNTL_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"L0_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"L1_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+4,0,"L2_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"wait_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"wait_L0_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"putc_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"putc_L0_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+51,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+9,0,"memPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+119,0,"x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"x5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"x6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"x7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"x8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"x9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"x10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"x11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"x12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"x13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"x14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"x15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"x16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"x17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"x18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"x19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"x20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"x21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"x22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"x23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"x24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"x25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"x26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"x27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"x28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"x29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"x30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"x31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"NOP_CODEOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"ASMerror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+119,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"gp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"a4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"a5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"a6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"a7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"s6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"s7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"s9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"s10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"s11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"t3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"t4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"t5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"t6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("UART", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+152,0,"clk_freq_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"baud_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"i_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"o_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"START_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+115,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep17___024root__trace_init_top(Vstep17___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_init_top\n"); );
    // Body
    Vstep17___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstep17___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstep17___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep17___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep17___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstep17___024root__trace_register(Vstep17___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstep17___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstep17___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstep17___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstep17___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstep17___024root__trace_const_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep17___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_const_0\n"); );
    // Init
    Vstep17___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep17___024root*>(voidSelf);
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep17___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep17___024root__trace_const_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+118,(0U));
    bufp->fullIData(oldp+119,(0U),32);
    bufp->fullIData(oldp+120,(1U),32);
    bufp->fullIData(oldp+121,(2U),32);
    bufp->fullIData(oldp+122,(3U),32);
    bufp->fullIData(oldp+123,(4U),32);
    bufp->fullIData(oldp+124,(5U),32);
    bufp->fullIData(oldp+125,(6U),32);
    bufp->fullIData(oldp+126,(0xcU),32);
    bufp->fullIData(oldp+127,(7U),32);
    bufp->fullIData(oldp+128,(8U),32);
    bufp->fullIData(oldp+129,(9U),32);
    bufp->fullIData(oldp+130,(0xaU),32);
    bufp->fullIData(oldp+131,(0xbU),32);
    bufp->fullIData(oldp+132,(0xdU),32);
    bufp->fullIData(oldp+133,(0xeU),32);
    bufp->fullIData(oldp+134,(0xfU),32);
    bufp->fullIData(oldp+135,(0x10U),32);
    bufp->fullIData(oldp+136,(0x11U),32);
    bufp->fullIData(oldp+137,(0x12U),32);
    bufp->fullIData(oldp+138,(0x13U),32);
    bufp->fullIData(oldp+139,(0x14U),32);
    bufp->fullIData(oldp+140,(0x15U),32);
    bufp->fullIData(oldp+141,(0x16U),32);
    bufp->fullIData(oldp+142,(0x17U),32);
    bufp->fullIData(oldp+143,(0x18U),32);
    bufp->fullIData(oldp+144,(0x19U),32);
    bufp->fullIData(oldp+145,(0x1aU),32);
    bufp->fullIData(oldp+146,(0x1bU),32);
    bufp->fullIData(oldp+147,(0x1cU),32);
    bufp->fullIData(oldp+148,(0x1dU),32);
    bufp->fullIData(oldp+149,(0x1eU),32);
    bufp->fullIData(oldp+150,(0x1fU),32);
    bufp->fullIData(oldp+151,(0x33U),32);
    bufp->fullIData(oldp+152,(0x4876e800U),32);
    bufp->fullIData(oldp+153,(0xf4240U),32);
    bufp->fullIData(oldp+154,(0x4bfU),32);
}

VL_ATTR_COLD void Vstep17___024root__trace_full_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep17___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_full_0\n"); );
    // Init
    Vstep17___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep17___024root*>(voidSelf);
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep17___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep17___024root__trace_full_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_),32);
    bufp->fullIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_),32);
    bufp->fullIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_),32);
    bufp->fullIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_),32);
    bufp->fullIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_),32);
    bufp->fullIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_),32);
    bufp->fullIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_),32);
    bufp->fullIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC),32);
    bufp->fullIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[31]),32);
    bufp->fullCData(oldp+42,(vlSelf->bench__DOT__LEDS),5);
    bufp->fullBit(oldp+43,((1U & ((~ (IData)((0U != (IData)(vlSelf->bench__DOT__uut__DOT__UART__DOT__data)))) 
                                  | (IData)(vlSelf->bench__DOT__uut__DOT__UART__DOT__data)))));
    bufp->fullBit(oldp+44,((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))));
    bufp->fullIData(oldp+45,(vlSelf->bench__DOT__uut__DOT__mem_addr),32);
    bufp->fullIData(oldp+46,(vlSelf->bench__DOT__uut__DOT__mem_rdata),32);
    bufp->fullBit(oldp+47,(((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                            | (4U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
    bufp->fullIData(oldp+48,(vlSelf->bench__DOT__uut__DOT__mem_wdata),32);
    bufp->fullCData(oldp+49,(vlSelf->bench__DOT__uut__DOT__mem_wmask),4);
    bufp->fullIData(oldp+50,(vlSelf->bench__DOT__uut__DOT__RAM_rdata),32);
    bufp->fullIData(oldp+51,((vlSelf->bench__DOT__uut__DOT__mem_addr 
                              >> 2U)),30);
    bufp->fullBit(oldp+52,((1U & (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                  >> 0x16U))));
    bufp->fullBit(oldp+53,((1U & (~ (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+54,((0U != (IData)(vlSelf->bench__DOT__uut__DOT__mem_wmask))));
    bufp->fullBit(oldp+55,(vlSelf->bench__DOT__uut__DOT__uart_valid));
    bufp->fullBit(oldp+56,(vlSelf->bench__DOT__uut__DOT__uart_ready));
    bufp->fullIData(oldp+57,(((0x10U & vlSelf->bench__DOT__uut__DOT__mem_addr)
                               ? (0x200U & ((~ (IData)(vlSelf->bench__DOT__uut__DOT__uart_ready)) 
                                            << 9U))
                               : 0U)),32);
    bufp->fullIData(oldp+58,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC),32);
    bufp->fullIData(oldp+59,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr),32);
    bufp->fullBit(oldp+60,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+61,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+62,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+63,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+64,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+65,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+66,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+67,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+68,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullBit(oldp+69,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
    bufp->fullIData(oldp+70,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)),32);
    bufp->fullIData(oldp+71,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm),32);
    bufp->fullIData(oldp+72,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+73,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
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
    bufp->fullIData(oldp+74,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+78,((7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+79,((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+80,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1),32);
    bufp->fullIData(oldp+81,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2),32);
    bufp->fullIData(oldp+82,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData),32);
    bufp->fullBit(oldp+83,((((~ ((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
                             & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) 
                            | (5U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
    bufp->fullIData(oldp+84,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2),32);
    bufp->fullCData(oldp+85,((0x1fU & ((0x33U == (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                        ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                        : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                           >> 0x14U)))),5);
    bufp->fullIData(oldp+86,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus),32);
    bufp->fullQData(oldp+87,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus),33);
    bufp->fullBit(oldp+89,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+91,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus))));
    bufp->fullIData(oldp+92,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in),32);
    bufp->fullIData(oldp+93,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter),32);
    bufp->fullIData(oldp+94,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift),32);
    bufp->fullIData(oldp+95,(((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
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
    bufp->fullBit(oldp+96,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch));
    bufp->fullIData(oldp+97,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm),32);
    bufp->fullIData(oldp+98,(((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)),32);
    bufp->fullIData(oldp+99,(((((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
                               | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                               ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
                               : ((0x67U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                   ? (0xfffffffeU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                                   : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)))),32);
    bufp->fullIData(oldp+100,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr),32);
    bufp->fullBit(oldp+101,((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+102,((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0xcU)))));
    bufp->fullSData(oldp+103,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword),16);
    bufp->fullCData(oldp+104,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte),8);
    bufp->fullBit(oldp+105,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign));
    bufp->fullIData(oldp+106,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                             >> 0xcU)))
                                ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                    << 8U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte))
                                : ((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0xcU)))
                                    ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                        << 0x10U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword))
                                    : vlSelf->bench__DOT__uut__DOT__mem_rdata))),32);
    bufp->fullCData(oldp+107,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                             >> 0xcU)))
                                ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                    ? ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                        ? 8U : 4U) : 
                                   ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                     ? 2U : 1U)) : 
                               ((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0xcU)))
                                 ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                     ? 0xcU : 3U) : 0xfU))),4);
    bufp->fullCData(oldp+108,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state),3);
    bufp->fullSData(oldp+109,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt),16);
    bufp->fullBit(oldp+110,(((~ (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                 >> 0x16U)) & ((0U 
                                                == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                                               | (4U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))))));
    bufp->fullCData(oldp+111,(vlSelf->bench__DOT__uut__DOT____Vcellinp__RAM__mem_wmask),4);
    bufp->fullBit(oldp+112,((1U & (~ (IData)((0xffffU 
                                              == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt)))))));
    bufp->fullCData(oldp+113,((0xffU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)),8);
    bufp->fullSData(oldp+114,(vlSelf->bench__DOT__uut__DOT__UART__DOT__cnt),12);
    bufp->fullSData(oldp+115,(vlSelf->bench__DOT__uut__DOT__UART__DOT__data),10);
    bufp->fullBit(oldp+116,(vlSelf->bench__DOT__CLK));
    bufp->fullCData(oldp+117,(vlSelf->bench__DOT__prev_LEDS),5);
}

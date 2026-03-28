// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_regfile.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_regfile::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtest_top_regfile::~Vtest_top_regfile() {
}

void Vtest_top_regfile::_initial__TOP__test_top__regfile0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_initial__TOP__test_top__regfile0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[1U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[2U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[3U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[4U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[5U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[6U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[7U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[8U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[9U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xaU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xbU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xcU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xdU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xeU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xfU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x10U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x11U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x12U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x13U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x14U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x15U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x16U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x17U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x18U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x19U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1aU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1bU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1cU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1dU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1eU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1fU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__i = 0x20U;
}

void Vtest_top_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__we_i = VL_RAND_RESET_I(1);
    __PVT__waddr_i = VL_RAND_RESET_I(5);
    __PVT__wdata_i = VL_RAND_RESET_I(32);
    __PVT__re1_i = VL_RAND_RESET_I(1);
    __PVT__raddr1_i = VL_RAND_RESET_I(5);
    __PVT__re2_i = VL_RAND_RESET_I(1);
    __PVT__raddr2_i = VL_RAND_RESET_I(5);
    __PVT__rdata1_o = VL_RAND_RESET_I(32);
    __PVT__rdata2_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__i = VL_RAND_RESET_I(32);
}

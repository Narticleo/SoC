// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_dpram__R200000_RB15.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtest_top_dpram__R200000_RB15::readByte(uint32_t byte_addr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::readByte\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    val = vlSymsp->TOP__test_top__data_ram0.__PVT__mem
        [(0x1fffffU & byte_addr)];
}

void Vtest_top_dpram__R200000_RB15::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::writeByte\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__data_ram0.__PVT__mem[(0x1fffffU 
                                                  & byte_addr)] 
        = val;
}

VL_INLINE_OPT void Vtest_top_dpram__R200000_RB15::_sequent__TOP__test_top__data_ram0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::_sequent__TOP__test_top__data_ram0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    IData/*20:0*/ __Vdlyvdim0__mem__v0;
    IData/*20:0*/ __Vdlyvdim0__mem__v1;
    IData/*20:0*/ __Vdlyvdim0__mem__v2;
    IData/*20:0*/ __Vdlyvdim0__mem__v3;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o) 
         & (IData)(vlSymsp->TOP__test_top.__PVT__mem_mem_we_o))) {
        __Vdlyvval__mem__v0 = (0xffU & (vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                                        >> 0x18U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o);
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                                        >> 0x10U));
        __Vdlyvdim0__mem__v1 = (0x1fffffU & ((IData)(1U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)));
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__test_top.__PVT__mem_mem_data_o 
                                        >> 8U));
        __Vdlyvdim0__mem__v2 = (0x1fffffU & ((IData)(2U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)));
        __Vdlyvval__mem__v3 = (0xffU & vlSymsp->TOP__test_top.__PVT__mem_mem_data_o);
        __Vdlyvdim0__mem__v3 = (0x1fffffU & ((IData)(3U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)));
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__test_top__data_ram0.__PVT__mem[__Vdlyvdim0__mem__v0] 
            = __Vdlyvval__mem__v0;
        vlSymsp->TOP__test_top__data_ram0.__PVT__mem[__Vdlyvdim0__mem__v1] 
            = __Vdlyvval__mem__v1;
        vlSymsp->TOP__test_top__data_ram0.__PVT__mem[__Vdlyvdim0__mem__v2] 
            = __Vdlyvval__mem__v2;
        vlSymsp->TOP__test_top__data_ram0.__PVT__mem[__Vdlyvdim0__mem__v3] 
            = __Vdlyvval__mem__v3;
    }
}

VL_INLINE_OPT void Vtest_top_dpram__R200000_RB15::_settle__TOP__test_top__data_ram0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::_settle__TOP__test_top__data_ram0__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
        = ((IData)(vlSymsp->TOP__test_top.__PVT__mem_ram_ce_o)
            ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)] 
                << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                              [(0x1fffffU & ((IData)(1U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)))] 
                              << 0x10U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)))] 
                                            << 8U) 
                                           | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                           [(0x1fffffU 
                                             & ((IData)(3U) 
                                                + (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__mem_mem_addr_o)))])))
            : 0U);
}

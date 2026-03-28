// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_regfile.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtest_top_regfile::readRegister(uint32_t raddr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::readRegister\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    val = vlSymsp->TOP__test_top__regfile0.__PVT__regs
        [(0x1fU & raddr)];
}

VL_INLINE_OPT void Vtest_top_regfile::_sequent__TOP__test_top__regfile0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_sequent__TOP__test_top__regfile0__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__regs__v0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (((IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o) 
             & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))) {
            __Vdlyvval__regs__v0 = vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o;
            __Vdlyvset__regs__v0 = 1U;
            __Vdlyvdim0__regs__v0 = vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o;
        }
    }
    if (__Vdlyvset__regs__v0) {
        vlSymsp->TOP__test_top__regfile0.__PVT__regs[__Vdlyvdim0__regs__v0] 
            = __Vdlyvval__regs__v0;
    }
}

VL_INLINE_OPT void Vtest_top_regfile::_settle__TOP__test_top__regfile0__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_settle__TOP__test_top__regfile0__3\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
            ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                       == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                      & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                     & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                     ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                     : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                         ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                        [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                         : 0U)));
    vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))
            ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                       == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                      & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                     & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))
                     ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                     : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                         ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                        [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                         : 0U)));
}

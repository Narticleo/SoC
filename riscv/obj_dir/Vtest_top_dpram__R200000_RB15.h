// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_DPRAM__R200000_RB15_H_
#define _VTEST_TOP_DPRAM__R200000_RB15_H_  // guard

#include "verilated.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;


//----------

VL_MODULE(Vtest_top_dpram__R200000_RB15) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__ce_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__inst_ce_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUT(__PVT__inst_o,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__mem[2097152];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_dpram__R200000_RB15);  ///< Copying not allowed
  public:
    Vtest_top_dpram__R200000_RB15(const char* name = "TOP");
    ~Vtest_top_dpram__R200000_RB15();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__test_top__data_ram0__1(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__data_ram0__2(Vtest_top__Syms* __restrict vlSymsp);
    void readByte(uint32_t byte_addr, uint32_t& val);
    void writeByte(uint32_t byte_addr, uint32_t val);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

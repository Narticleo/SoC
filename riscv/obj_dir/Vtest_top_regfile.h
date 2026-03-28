// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_REGFILE_H_
#define _VTEST_TOP_REGFILE_H_  // guard

#include "verilated.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;


//----------

VL_MODULE(Vtest_top_regfile) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__waddr_i,4,0);
    VL_IN8(__PVT__re1_i,0,0);
    VL_IN8(__PVT__raddr1_i,4,0);
    VL_IN8(__PVT__re2_i,0,0);
    VL_IN8(__PVT__raddr2_i,4,0);
    VL_IN(__PVT__wdata_i,31,0);
    VL_OUT(__PVT__rdata1_o,31,0);
    VL_OUT(__PVT__rdata2_o,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__regs[32];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_regfile);  ///< Copying not allowed
  public:
    Vtest_top_regfile(const char* name = "TOP");
    ~Vtest_top_regfile();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__test_top__regfile0__1(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__test_top__regfile0__2(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__regfile0__3(Vtest_top__Syms* __restrict vlSymsp);
    void readRegister(uint32_t raddr, uint32_t& val);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTEST_TOP__SYMS_H_
#define _VTEST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtest_top.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_regfile.h"
#include "Vtest_top_dpram__R200000_RB15.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtest_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtest_top*                     TOPp;
    Vtest_top_test_top             TOP__test_top;
    Vtest_top_dpram__R200000_RB15  TOP__test_top__data_ram0;
    Vtest_top_regfile              TOP__test_top__regfile0;
    
    // CREATORS
    Vtest_top__Syms(Vtest_top* topp, const char* namep);
    ~Vtest_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

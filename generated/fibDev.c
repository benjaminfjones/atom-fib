#include <stdbool.h>
#include <stdint.h>


#include <stdbool.h>
#include <stdio.h>
#include "main.h"

// ---- This source is automatically generated by Atom ----


static uint64_t __global_clock = 0;



static const uint32_t __coverage_len = 1;
static uint32_t __coverage[1] = {0};
static uint32_t __coverage_index = 0;
struct {  /* state_dev */
  struct {  /* fibDev */
    uint64_t fstf;
    uint64_t sndf;
    uint64_t ans;
    uint64_t i;
    bool runFib;
  } fibDev;
} state_dev =
{  /* state_dev */
  {  /* fibDev */
    /* fstf */  1ULL,
    /* sndf */  1ULL,
    /* ans */  0ULL,
    /* i */  0ULL,
    /* runFib */  false
  }
};

/* fibDev.sendVal */
static void __r2() {
  bool __0 = state_dev.fibDev.runFib;
  uint64_t __1 = state_dev.fibDev.i;
  uint64_t __2 = 0ULL;
  bool __3 = __1 == __2;
  bool __4 = __0 && __3;
  bool __5 = __3 && __0;
  bool __6 = ! __5;
  bool __7 = __6 && __0;
  uint64_t __8 = state_dev.fibDev.fstf;
  uint64_t __9 = state_dev.fibDev.ans;
  uint64_t __10 = __5 ? __8 : __9;
  bool __11 = ansReady;
  bool __12 = __6 && __11;
  bool __13 = ! __12;
  bool __14 = __13 && __6;
  bool __15 = ! __14;
  bool __16 = valRcvd;
  bool __17 = __6 && __16;
  if (__4) {
    printf("fibDev.sendVal: ans <== %llu\n", __8);
    __coverage[0] = __coverage[0] | (1 << 2);
  }
  state_dev.fibDev.runFib = __7;
  state_dev.fibDev.ans = __10;
  ansReady = __15;
  valRcvd = __17;
}

/* fibDev.computeFib */
static void __r1() {
  bool __0 = state_dev.fibDev.runFib;
  uint64_t __1 = 0ULL;
  uint64_t __2 = state_dev.fibDev.i;
  bool __3 = __1 < __2;
  bool __4 = __0 && __3;
  bool __5 = __3 && __0;
  uint64_t __6 = 1ULL;
  uint64_t __7 = __2 - __6;
  uint64_t __8 = __5 ? __7 : __2;
  uint64_t __9 = state_dev.fibDev.fstf;
  uint64_t __10 = state_dev.fibDev.sndf;
  uint64_t __11 = __9 + __10;
  uint64_t __12 = __5 ? __11 : __10;
  uint64_t __13 = __5 ? __10 : __9;
  if (__4) {
    printf("fibDev.computeFib: i = %llu\n", __2);
    __coverage[0] = __coverage[0] | (1 << 1);
  }
  state_dev.fibDev.i = __8;
  state_dev.fibDev.sndf = __12;
  state_dev.fibDev.fstf = __13;
}

/* fibDev.getIndex */
static void __r0() {
  bool __0 = newInd;
  bool __1 = state_dev.fibDev.runFib;
  bool __2 = ! __1;
  bool __3 = __0 && __2;
  bool __4 = __2 && __0;
  uint64_t __5 = x;
  uint64_t __6 = state_dev.fibDev.i;
  uint64_t __7 = __4 ? __5 : __6;
  bool __8 = ! __4;
  bool __9 = __8 && __1;
  bool __10 = ! __9;
  bool __11 = __8 && __10;
  bool __12 = ! __11;
  uint64_t __13 = 1ULL;
  uint64_t __14 = state_dev.fibDev.fstf;
  uint64_t __15 = __4 ? __13 : __14;
  uint64_t __16 = state_dev.fibDev.sndf;
  uint64_t __17 = __4 ? __13 : __16;
  bool __18 = ansReady;
  bool __19 = __8 && __18;
  bool __20 = valRcvd;
  bool __21 = __8 && __20;
  bool __22 = ! __21;
  bool __23 = __22 && __8;
  bool __24 = ! __23;
  if (__3) {
    printf("fibDev.getIndex: x = %llu\n", __5);
    __coverage[0] = __coverage[0] | (1 << 0);
  }
  state_dev.fibDev.i = __7;
  state_dev.fibDev.runFib = __12;
  state_dev.fibDev.fstf = __15;
  state_dev.fibDev.sndf = __17;
  ansReady = __19;
  valRcvd = __24;
}


static void __assertion_checks() {
}


void fibDev()
{

  {
    static uint8_t __scheduling_clock = 0;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r2();  /* fibDev.sendVal */
      __scheduling_clock = 2;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }
  {
    static uint8_t __scheduling_clock = 1;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r1();  /* fibDev.computeFib */
      __scheduling_clock = 2;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }
  {
    static uint8_t __scheduling_clock = 2;
    if (__scheduling_clock == 0) {
      __assertion_checks(); __r0();  /* fibDev.getIndex */
      __scheduling_clock = 2;
    }
    else {
      __scheduling_clock = __scheduling_clock - 1;
    }
  }

  __global_clock = __global_clock + 1;

}

// ---- This source is automatically generated by Atom ----


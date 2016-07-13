#include <stdbool.h>
#include <stdint.h>



void fibDvr();

extern struct {  /* state_dvr */
  struct {  /* fibDvr */
    uint64_t oldInd;
    uint64_t valD;
    bool newInd;
    bool waiting;
  } fibDvr;
} state_dvr;




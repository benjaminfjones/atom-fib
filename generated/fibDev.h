#include <stdbool.h>
#include <stdint.h>



void fibDev();

extern struct {  /* state_dev */
  struct {  /* fibDev */
    uint64_t fstf;
    uint64_t sndf;
    uint64_t ans;
    uint64_t i;
    bool runFib;
  } fibDev;
} state_dev;




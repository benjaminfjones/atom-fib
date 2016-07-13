#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include "main.h"

/* NOTE: this demo DOESN'T work because the 'external' signals are simple
 * global variables here with extern linkage. These aren't shared across the
 * process boundary.
 *
 * For this to work we'd need to setup shared memory explicitly in main and
 * change references and types in the fib modules to be pointers to shared
 * memory.
 */


/* global vars shared between fibDev and fibDvr */
uint64_t x;
bool newInd;
bool valRcvd;
uint64_t ans;
bool ansReady;

/* Microsecond delay between atom executions */
const unsigned UDELAY = 1000;

int main(int argc, char** argv) {
    x = 6;
    newInd = true;

    pid_t pid = fork();

    if (pid > 0) {
        /* parent process runs the driver */
        while (1) {
            printf("Running Driver fibDvr\n");
            fibDvr();  /* ask fibDev to compute fib(6), (11), ... */
            usleep(UDELAY);
            if (ansReady) {
                printf("input = %llu, ans = %llu\n", x, ans);
            }
        }
    } else if (pid == 0) {
        while (1) {
            printf("Running Device fibDev\n");
            fibDev();  /* compute fib(6), fib(11), ... */
            usleep(UDELAY);
        }
    } else {
        fprintf(stderr, "can't fork, error %d\n", errno);
        exit(EXIT_FAILURE);
    }

    /* unreachable */
    return 0;
}


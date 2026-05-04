#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    // Print a message to indicate the process has started
    printf("Dummy process starting...\n");
    
    // A large loop to keep the CPU busy. 
    // This will consume CPU time and trigger the timer interrupts,
    // which in turn will trigger our MLFQ demotion logic.
    volatile int i = 0;
    while(i < 500000000) {
        i++;
    }
    
    // Print a message when the CPU-intensive task is done
    printf("Dummy process finished.\n");
    
    // Exit the process successfully
    exit(0);
}

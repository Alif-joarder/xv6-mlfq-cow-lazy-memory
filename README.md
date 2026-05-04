**Multilevel Feedback Queue (MLFQ)** scheduling algorithm in the xv6 operating system.

Group Members
1.Alif Joarder - ID: [1831789042] (Implemented Multilevel Feedback Queue)
 

## Features Implemented
1. **MLFQ Scheduling:** 3 priority levels (0, 1, 2) with different time quantums (1, 2, 4 ticks).

## Files Modified
* `kernel/proc.h`: Added `priority` and `ticks_count` to the `proc` structure.
* `kernel/proc.c`: Updated `allocproc()` for initialization and `scheduler()` for MLFQ logic.
* `kernel/trap.c`: Implemented time quantum logic in `usertrap()` and `kerneltrap()`.
* `Makefile`: Added `dummy.c` to `UPROGS` for testing.

## How to Run
To run the project, use the following commands in the terminal:
```bash
make clean
make qemu

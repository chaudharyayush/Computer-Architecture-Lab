// Implement a simple task using RISC-style instructions

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    // RISC-style: Explicit load/store and add operations
    int reg0, reg1; // simulate registers
    
    // Step-by-step load and add
    reg0 = arr[0];   // LOAD arr[0] → reg0
    sum = reg0;      // ADD reg0 → sum

    reg0 = arr[1];   // LOAD arr[1] → reg0
    sum = sum + reg0; // ADD reg0 → sum

    reg0 = arr[2];
    sum = sum + reg0;

    reg0 = arr[3];
    sum = sum + reg0;

    reg0 = arr[4];
    sum = sum + reg0;

    printf("RISC-style Sum = %d\n", sum);
    return 0;
}


// Notes:

// Each step simulates one simple RISC instruction: load or add

// Memory accessed only via load/store

// More instructions (5 loads + 5 adds = 10 instructions)
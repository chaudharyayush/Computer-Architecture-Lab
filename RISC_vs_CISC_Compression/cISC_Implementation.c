// Implement same task using CISC-style instructions
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // CISC-style: Direct memory operations
    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];

    printf("CISC-style Sum = %d\n", sum);
    return 0;
}

// Notes:

// Single line performs load + add multiple times

// Fewer instructions (1 instruction for sum), but each instruction is more complex

// Memory can be accessed directly in arithmetic
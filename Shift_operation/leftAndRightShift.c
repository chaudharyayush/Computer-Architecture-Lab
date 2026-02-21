#include <stdio.h>

void printBinary(unsigned int num) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (num >> i) & 1);
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("\nOriginal: ");
    printBinary(num);

    // Each left shift multiplies number by 2.
    // Left Shift
    printf("\nLeft Shift (num << 1): ");
    printBinary(num << 1);

    // Each right shift divides number by 2.
    // Right Shift
    printf("\nRight Shift (num >> 1): ");
    printBinary(num >> 1);

    return 0;
}

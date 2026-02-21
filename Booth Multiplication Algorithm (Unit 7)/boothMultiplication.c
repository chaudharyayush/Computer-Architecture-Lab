// Implement signed multiplication using Booth’s Algorithm

#include <stdio.h>

void printBinary(int num, int bits) {
    for (int i = bits - 1; i >= 0; i--)
        printf("%d", (num >> i) & 1);
}

int main() {
    int M, Q, A = 0, Q1 = 0;
    int count, bits = 4;

    printf("Enter multiplicand: ");
    scanf("%d", &M);

    printf("Enter multiplier: ");
    scanf("%d", &Q);

    count = bits;

    printf("\nInitial Values:\n");
    printf("A = "); printBinary(A, bits);
    printf("  Q = "); printBinary(Q, bits);
    printf("  Q-1 = %d\n", Q1);

    while (count > 0) {

        int Q0 = Q & 1;

        if (Q0 == 1 && Q1 == 0) {
            A = A - M;
            printf("\nA = A - M\n");
        }
        else if (Q0 == 0 && Q1 == 1) {
            A = A + M;
            printf("\nA = A + M\n");
        }

        // Arithmetic Right Shift
        Q1 = Q & 1;
        Q = (Q >> 1) | ((A & 1) << (bits - 1));
        A = A >> 1;

        printf("After Shift: ");
        printf("A = "); printBinary(A, bits);
        printf("  Q = "); printBinary(Q, bits);
        printf("  Q-1 = %d\n", Q1);

        count--;
    }

    printf("\nFinal Result (A,Q): ");
    printBinary(A, bits);
    printBinary(Q, bits);

    printf("\nDecimal Result = %d\n", (A << bits) | (Q & 0xF));

    return 0;
}

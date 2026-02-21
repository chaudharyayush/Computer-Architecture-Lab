// Overflow Detection in Signed and Unsigned Arithmetic

#include <stdio.h>
#include <limits.h>  //Contains limits like INT_MAX, INT_MIN.

int main() {
    int a, b;
    int signed_sum;
    unsigned int ua, ub, unsigned_sum;
    
// Enter two signed integers (-2147483648 to 2147483647)
    printf("Enter two signed integers: ");
    scanf("%d %d", &a, &b);

    // Signed Addition
    signed_sum = a + b;

    printf("\n--- Signed Arithmetic ---\n");
    printf("Signed Sum = %d\n", signed_sum);

    // Signed Overflow Detection
    if ((a > 0 && b > 0 && signed_sum < 0) ||
        (a < 0 && b < 0 && signed_sum > 0)) {
        printf("Signed Overflow Detected!\n");
    } else {
        printf("No Signed Overflow.\n");
    }

    // Unsigned Addition
    ua = (unsigned int)a;
    ub = (unsigned int)b;
    unsigned_sum = ua + ub;

    printf("\n--- Unsigned Arithmetic ---\n");
    printf("Unsigned Sum = %u\n", unsigned_sum);

    // Unsigned Overflow Detection
    if (unsigned_sum < ua || unsigned_sum < ub) {
        printf("Unsigned Overflow Detected!\n");
    } else {
        printf("No Unsigned Overflow.\n");
    }

    return 0;
}

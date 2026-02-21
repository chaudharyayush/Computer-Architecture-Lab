#include <stdio.h>

int main() {
    int n;
    int binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;  //Moves to the next position in the array
    }

    printf("Binary equivalent: ");

    // Binary digits were stored in reverse order
    // This loop prints them from last to first
    // i - 1 → index of most significant bit (MSB)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int binary, gray;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    gray = binary ^ (binary >> 1);

    printf("Gray code: %d", gray);

    return 0;
}

#include <stdio.h>

int main() {
    int n, bits = 8;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = (~n) + 1;

    printf("2's Complement: ");
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }

    return 0;
}

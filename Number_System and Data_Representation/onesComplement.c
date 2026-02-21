#include <stdio.h>

int main() {
    int n, bits = 8;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1's Complement: ");
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", !(n >> i & 1));
    }

    return 0;
}

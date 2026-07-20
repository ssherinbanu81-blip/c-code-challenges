#include <stdio.h>

int main() {
    int n, square, rem, sum = 0;

    scanf("%d", &n);

    square = n * n;

    while (square != 0) {
        rem = square % 10;
        sum = sum + rem;
        square = square / 10;
    }

    if (sum == n)
        printf("Neon");
    else
        printf("Not Neon");

    return 0;
}

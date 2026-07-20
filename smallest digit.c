#include <stdio.h>

int main() {
    int n, rem, min = 9;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;

        if (rem < min)
            min = rem;

        n /= 10;
    }

    printf("%d", min);

    return 0;
}

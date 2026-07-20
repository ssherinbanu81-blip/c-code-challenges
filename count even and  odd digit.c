#include <stdio.h>

int main() {
    int n, rem;
    int even = 0, odd = 0;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;

        if (rem % 2 == 0)
            even++;
        else
            odd++;

        n /= 10;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}

#include <stdio.h>

int prime(int n) {
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int n, rev = 0, temp, rem;

    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (prime(n) && prime(rev) && n != rev)
        printf("Emirp Number");
    else
        printf("Not Emirp Number");

    return 0;
}

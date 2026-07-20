#include <stdio.h>
#include <math.h>

int main() {
    int binary, rem, i = 0;
    int decimal = 0;

    scanf("%d", &binary);

    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("%d", decimal);

    return 0;
}

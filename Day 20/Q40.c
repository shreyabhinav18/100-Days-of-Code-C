#include <stdio.h>

int main() {
    int n, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0) {
            digit = 1;
        }
        else {
            digit = 0;
        }

        complement = complement + digit * place;
        place = place * 10;

        n = n / 10;
    }

    printf("1's complement = %d\n", complement);

    return 0;
}

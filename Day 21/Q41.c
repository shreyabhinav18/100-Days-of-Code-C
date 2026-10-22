#include <stdio.h>

int main() {
    int n, original, first, last, digits = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;

    while (n >= 10) {
        n = n / 10;
        digits++;
    }

    first = n;

    while (digits > 0) {
        power = power * 10;
        digits--;
    }

    result = last * power + (original % power - last) + first;

    printf("After swapping = %d\n", result);

    return 0;
}

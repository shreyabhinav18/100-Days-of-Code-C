#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("The number is an Armstrong number.\n");
    }
    else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;   // assume num is prime

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;   // found a divisor, not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

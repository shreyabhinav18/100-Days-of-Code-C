#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;                 // first term is 1
        } else {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

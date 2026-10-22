#include <stdio.h>

int main() {
    int n, i, product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product of even numbers = %d\n", product);

    return 0;
}

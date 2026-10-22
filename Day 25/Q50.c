#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

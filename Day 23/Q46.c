#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

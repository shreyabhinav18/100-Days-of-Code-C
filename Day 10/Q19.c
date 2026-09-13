#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }

    return 0;
}

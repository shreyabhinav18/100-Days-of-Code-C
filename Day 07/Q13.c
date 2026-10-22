#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        ? printf("It is a leap year.\n")
        : printf("It is not a leap year.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Cannot find remainder with zero.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

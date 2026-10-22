#include <stdio.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    // Read string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Read target char
    printf("Enter the character to find: ");
    scanf(" %c", &target); // Space before %c ignores newline

    // Count
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times.\n", target, count);
    return 0;
}

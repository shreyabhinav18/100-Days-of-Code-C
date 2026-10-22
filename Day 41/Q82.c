#include <stdio.h>

int main() {
    char str[100];

    // 1. Read the string from the user
    printf("Enter a string: ");
    // %[^\n] allows us to read spaces as well
    scanf("%[^\n]", str);

    printf("\nCharacters in the string:\n");

    // 2. Loop through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Print the character and move to a new line
        printf("%c\n", str[i]);
    }

    return 0;
}

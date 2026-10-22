#include <stdio.h>

int main() {
    char str[100];

    // 1. Read the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // 2. Iterate through the string and toggle the case
    for (int i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // If character is uppercase, convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If it's a space, number, or symbol, it falls through and remains unchanged
    }

    // 3. Print the modified string
    printf("Toggled string: %s\n", str);

    return 0;
}

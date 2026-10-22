#include <stdio.h>

int main() {
    char str[100];

    // 1. Read the string from the user
    printf("Enter a lowercase string: ");
    // %[^\n] reads the string including spaces
    scanf("%[^\n]", str);

    // 2. Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from its ASCII value
            str[i] = str[i] - 32;
        }
    }

    // 3. Print the modified string
    printf("Uppercase string: %s\n", str);

    return 0;
}

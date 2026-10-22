#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    // 1. Read the string from the user
    printf("Enter a string: ");
    // %[^\n] reads the string including spaces
    scanf("%[^\n]", str);

    // 2. Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        
        // Check for space
        if (str[i] == ' ') {
            spaces++;
        } 
        // Check for digit (0-9)
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        // Check for alphabets (A-Z or a-z) to ignore them
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Do nothing, we don't need to count letters here
        } 
        // If it's not a space, not a digit, and not a letter, it must be special
        else {
            special++;
        }
    }

    // 3. Print the results
    printf("\nSpaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}

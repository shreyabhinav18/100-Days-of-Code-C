#include <stdio.h>

int main() {
    char str[100]; // Assuming the string won't exceed 100 characters
    int count = 0;

    // 1. Read the string from the user
    printf("Enter a string: ");
    // %[^\n] reads the whole line, including spaces, until a newline is found
    scanf("%[^\n]", str);

    // 2. Count the characters using a loop
    // Keep going as long as the current character is not the null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    // 3. Print the result
    printf("The number of characters in the string is: %d\n", count);

    return 0;
}

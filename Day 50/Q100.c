#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // 1. Read the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // 2. Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("\nAll substrings are:\n");

    // 3. Generate and print all substrings
    // Outer loop: picks the starting index
    for (int start = 0; start < length; start++) {
        
        // Middle loop: picks the ending index
        for (int end = start; end < length; end++) {
            
            // Inner loop: prints characters from 'start' to 'end'
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Move to the next line after printing a substring
        }
    }

    return 0;
}

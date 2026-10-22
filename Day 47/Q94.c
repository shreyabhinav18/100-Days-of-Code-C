#include <stdio.h>

int main() {
    char str[200];
    
    // Variables to track the current word and the longest word
    int curr_len = 0, max_len = 0;
    int curr_start = 0, max_start = 0;

    // 1. Read the sentence from the user
    printf("Enter a sentence: ");
    // %[^\n] reads spaces as well
    scanf("%[^\n]", str);

    // 2. Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        
        // If the current character is not a space, we are inside a word
        if (str[i] != ' ') {
            if (curr_len == 0) {
                curr_start = i; // Mark the beginning of a new word
            }
            curr_len++; // Increase the length of the current word
        } 
        // If we hit a space OR the end of the string, the word ends
        if (str[i] == ' ' || str[i + 1] == '\0') {
            
            // Check if the word we just finished is the longest so far
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            
            curr_len = 0; // Reset current word length for the next word
        }
    }

    // 3. Print the longest word
    printf("The longest word is: ");
    // Loop from the start index of the longest word up to its length
    for (int i = max_start; i < max_start + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d characters\n", max_len);

    return 0;
}

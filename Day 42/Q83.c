#include <stdio.h>
#include <ctype.h> // Required for tolower() and isalpha() functions

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // 1. Read the string from the user
    printf("Enter a string: ");
    // %[^\n] allows reading spaces
    scanf("%[^\n]", str);

    // 2. Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easy comparison

        // Check if the character is an alphabet letter
        if (isalpha(ch)) {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } 
            // If it's an alphabet but not a vowel, it's a consonant
            else {
                consonants++;
            }
        }
        // If it's a space, number, or special character, we just ignore it
    }

    // 3. Print the results
    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}

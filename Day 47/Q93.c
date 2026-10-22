#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; // Array to hold frequencies for all ASCII characters
    int isAnagram = 1;    // Flag: 1 means true, 0 means false

    // 1. Read the two strings
    printf("Enter the first string: ");
    scanf("%[^\n]", str1);
    
    // The space before %[^\n] is crucial! It skips the leftover newline from the first input.
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    // 2. Find the length of both strings manually
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // 3. If lengths are different, they cannot be anagrams
    if (len1 != len2) {
        isAnagram = 0;
    } else {
        // 4. Update the frequency array
        for (int i = 0; i < len1; i++) {
            count[(unsigned char)str1[i]]++; // Increment for string 1
            count[(unsigned char)str2[i]]--; // Decrement for string 2
        }

        // 5. Check if all frequencies are zero
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0; // Found a mismatch
                break;
            }
        }
    }

    // 6. Print the result
    if (isAnagram) {
        printf("\nThe strings are Anagrams.\n");
    } else {
        printf("\nThe strings are NOT Anagrams.\n");
    }

    return 0;
}

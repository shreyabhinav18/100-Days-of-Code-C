#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char temp[200]; // To hold str1 + str1
    int len1 = 0, len2 = 0;

    // 1. Read the two strings
    printf("Enter the first string: ");
    scanf("%[^\n]", str1);
    
    // Space before %[^\n] skips the leftover newline from the first input
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    // 2. Find lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // 3. If lengths are different, they cannot be rotations
    if (len1 != len2) {
        printf("\nThe strings are NOT rotations of each other.\n");
        return 0;
    }

    // 4. Create the temporary string: str1 + str1
    int k = 0;
    for (int i = 0; i < len1; i++) {
        temp[k++] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        temp[k++] = str1[i];
    }
    temp[k] = '\0'; // Null-terminate the doubled string

    // 5. Check if str2 is a substring of temp
    int isRotation = 0;
    
    // We only need to check up to len1 to find the starting point
    for (int i = 0; i < len1; i++) {
        int match = 1;
        
        // Compare the substring of temp with str2
        for (int j = 0; j < len1; j++) {
            if (temp[i + j] != str2[j]) {
                match = 0; // Mismatch found
                break;
            }
        }
        
        if (match) {
            isRotation = 1;
            break; // Found a match!
        }
    }

    // 6. Print the result
    if (isRotation) {
        printf("\nThe strings ARE rotations of each other.\n");
    } else {
        printf("\nThe strings are NOT rotations of each other.\n");
    }

    return 0;
}

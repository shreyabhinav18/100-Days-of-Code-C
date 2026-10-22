#include <stdio.h>

int main() {
    char name[100];
    
    printf("Enter a name: ");
    scanf("%[^\n]", name);
    
    printf("Initials: ");
    
    // Flag to track if we are at the start of a word
    int is_new_word = 1;
    
    for (int i = 0; name[i] != '\0'; i++) {
        // Ignore leading/multiple spaces
        if (name[i] == ' ') {
            is_new_word = 1;
        } else {
            if (is_new_word) {
                char ch = name[i];
                // Convert to uppercase if lowercase
                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - 32;
                }
                printf("%c.", ch); // Print with a dot
                is_new_word = 0;
            }
        }
    }
    printf("\n");
    return 0;
}

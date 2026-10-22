#include <stdio.h>

int main() {
    char name[200];

    // 1. Read the full name
    printf("Enter full name: ");
    scanf("%[^\n]", name);

    // 2. Find the position of the last space
    int last_space = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }

    // If there is no space, the name is just one word
    if (last_space == -1) {
        printf("Output: %s\n", name);
        return 0;
    }

    printf("Output: ");

    // 3. Print initials for the first and middle names
    int is_new_word = 1;
    for (int i = 0; i < last_space; i++) {
        if (name[i] == ' ') {
            is_new_word = 1;
        } 
        else if (is_new_word) {
            char ch = name[i];
            // Convert to uppercase
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            printf("%c. ", ch);
            is_new_word = 0;
        }
    }

    // 4. Print the full surname
    // The surname starts right after the last space
    for (int i = last_space + 1; name[i] != '\0'; i++) {
        char ch = name[i];
        // Capitalize the first letter of the surname
        if (i == last_space + 1 && ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c", ch);
    }

    printf("\n");
    return 0;
}

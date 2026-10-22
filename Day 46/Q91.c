#include <stdio.h>

int main() {
    char str[100];
    int j = 0; // write index

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // check vowel (case insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            // skip it (do nothing)
        } else {
            str[j] = ch;
            j++;
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("String without vowels: %s\n", str);
    return 0;
}

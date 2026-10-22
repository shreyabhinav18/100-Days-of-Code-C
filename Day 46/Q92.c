#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0}; // Array to store frequency of a-z

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int found = 0; // Flag

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if it's a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a'; // Map 'a' to 0, 'b' to 1, etc.
            
            if (count[index] > 0) {
                // We've seen this character before!
                printf("The first repeating lowercase alphabet is: '%c'\n", str[i]);
                found = 1;
                break;
            } else {
                count[index]++;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    
    // 1. Read the string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // 2. Find the length of the string manually (without strlen)
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // 3. Reverse the string using two pointers
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }

    // 4. Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

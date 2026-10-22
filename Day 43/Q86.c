#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = 0;
    while(str[length] != '\0') length++;

    int start = 0;
    int end = length - 1;
    int isPalindrome = 1; // Flag

    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}

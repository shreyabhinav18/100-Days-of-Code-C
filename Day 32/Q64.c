#include <stdio.h>

int main() {
    long long num;
    
    // Array to store the frequency of each digit (0-9)
    int freq[10] = {0}; 

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
    }
    
    // Special case for 0
    if (num == 0) {
        freq[0] = 1;
    }

    // Extract digits and count frequencies
    while (num > 0) {
        int digit = num % 10;   // Get the last digit
        freq[digit]++;          // Increment its count in the array
        num /= 10;              // Remove the last digit
    }

    // Find the maximum frequency
    int max_freq = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    // Print the digit(s) with the maximum frequency
    printf("Most occurring digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (freq[i] == max_freq) {
            printf("%d ", i);
        }
    }
    printf("\nOccurs %d time(s).\n", max_freq);

    return 0;
}

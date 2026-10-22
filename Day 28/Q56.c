#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        // Print a space between elements, but not after the last one
        if (i < n - 1) {
            printf(" ");
        }
    }
    
    printf("\n");

    return 0;
}

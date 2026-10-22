#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int main() {
    int n;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Edge case: Array needs at least 2 elements
    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }

    int arr[n];

    // 2. Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Initialize largest and second_largest to the smallest possible integer
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // 4. Traverse the array once
    for (int i = 0; i < n; i++) {
        // If current element is greater than the largest
        if (arr[i] > largest) {
            second_largest = largest; // The old largest becomes the second largest
            largest = arr[i];         // Update largest
        } 
        // If current element is between second_largest and largest
        // Note: arr[i] != largest ensures we handle duplicate maximums (e.g., 10, 10, 5)
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // 5. Print the result
    if (second_largest == INT_MIN) {
        printf("No second largest element found (all elements might be equal).\n");
    } else {
        printf("Second largest element = %d\n", second_largest);
    }

    return 0;
}

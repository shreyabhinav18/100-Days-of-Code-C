#include <stdio.h>

int main() {
    int n, key;
    int foundIndex = -1; // -1 indicates not found

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the sorted array elements
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // 4. Binary Search Algorithm
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        // Calculate mid point (this formula prevents integer overflow)
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            foundIndex = mid; // Element found
            break;
        } 
        else if (arr[mid] < key) {
            // If key is greater, ignore the left half
            low = mid + 1;
        } 
        else {
            // If key is smaller, ignore the right half
            high = mid - 1;
        }
    }

    // 5. Print the result
    if (foundIndex != -1) {
        printf("Element %d found at index %d (Position %d).\n", key, foundIndex, foundIndex + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

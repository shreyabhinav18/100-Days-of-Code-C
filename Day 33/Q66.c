#include <stdio.h>

int main() {
    int n, key;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n+1 to accommodate the new element
    int arr[n + 1];

    // 2. Read the sorted array elements
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // 4. Shift elements to the right to make room for the new element
    int i = n - 1; // Start from the last index
    
    // While we haven't reached the beginning AND the current element is greater than key
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; // Shift element to the right
        i--;
    }
    
    // 5. Insert the new element at the correct position
    arr[i + 1] = key;

    // 6. Print the updated array
    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) { // Note: loop runs n+1 times
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}

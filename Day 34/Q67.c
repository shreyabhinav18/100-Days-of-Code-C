#include <stdio.h>

int main() {
    int n, key, pos;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n+1 to accommodate the new element
    int arr[n + 1];

    // 2. Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read the element and the position (1-based indexing)
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // 4. Validate the position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1; // Exit with error code
    }

    // 5. Shift elements to the right starting from the end
    // We loop backwards from the last element down to the target position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // 6. Insert the new element at the given position
    // Since the user entered a 1-based position, the index is pos - 1
    arr[pos - 1] = key;

    // 7. Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) { // Loop goes up to n (total n+1 elements)
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

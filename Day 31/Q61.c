#include <stdio.h>

int main() {
    int n, key, found = 0;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 2. Declare the array
    int arr[n];

    // 3. Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Read the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // 5. Perform Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1; // Mark as found
            printf("Element %d found at index %d (Position %d).\n", key, i, i + 1);
            break;     // Stop searching once found
        }
    }

    // 6. If loop finishes and 'found' is still 0
    if (found == 0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &key);

    // Find the element and shift
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            // Shift elements to the left
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Reduce size
            break; // Stop after deleting the first occurrence
        }
    }

    if (found) {
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Element not found!\n");
    }

    return 0;
}

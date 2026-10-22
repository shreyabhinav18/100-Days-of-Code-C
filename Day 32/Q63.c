#include <stdio.h>

int main() {
    int n1, n2;

    // 1. Read the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for the first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Read the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for the second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Declare the merged array (size = n1 + n2)
    int merged[n1 + n2];

    // 4. Copy elements of arr1 to merged array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // 5. Copy elements of arr2 to merged array
    // Note: We start at index n1 to append after arr1
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // 6. Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n;

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

    // 4. Reverse the array in-place using Two Pointers
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }

    // 5. Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

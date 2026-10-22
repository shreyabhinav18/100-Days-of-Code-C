#include <stdio.h>

// Function to find the first occurrence of target
int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;   // Search further left
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return first;
}

// Function to find the last occurrence of target
int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;    // Search further right
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return last;
}

int main() {
    int n, target;

    // 1. Read array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read target
    printf("Enter target element: ");
    scanf("%d", &target);

    // 4. Find first and last occurrence
    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    // 5. Print result
    if (first == -1) {
        printf("-1, -1\n");
    } else {
        printf("%d, %d\n", first, last);
    }

    return 0;
}

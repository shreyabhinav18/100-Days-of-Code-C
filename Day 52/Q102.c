#include <stdio.h>

// Function to find the index of the first element >= x
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;   // Default if no ceil exists

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;        // This could be the answer
            high = mid - 1;   // Search left for the first occurrence
        } else {
            low = mid + 1;    // Search right
        }
    }

    return ans;
}

int main() {
    int n, x;

    // 1. Read array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read x
    printf("Enter x: ");
    scanf("%d", &x);

    // 4. Find ceil index
    int index = findCeilIndex(arr, n, x);

    // 5. Print result
    printf("%d\n", index);

    return 0;
}

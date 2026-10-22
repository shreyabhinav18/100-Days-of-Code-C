#include <stdio.h>

int main() {
    int n;

    // 1. Read the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Calculate the total sum of the array
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // 4. Find the pivot index
    long long leftSum = 0;

    for (int i = 0; i < n; i++) {
        // rightSum = totalSum - leftSum - arr[i]
        long long rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);   // Print leftmost pivot index
            return 0;
        }

        leftSum += arr[i];       // Update leftSum for next iteration
    }

    // 5. No pivot index found
    printf("-1\n");
    return 0;
}

#include <stdio.h>

int main() {
    int n;

    // 1. Read the size of the array
    scanf("%d", &n);

    // 2. Declare the array
    int arr[n];

    // 3. Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];

    // 5. Traverse the array to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 6. Print the result in the required format
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}

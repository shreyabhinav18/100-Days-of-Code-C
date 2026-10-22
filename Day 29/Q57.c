#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // 1. Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 2. Declare the array
    int arr[n];

    // 3. Read the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 4. Calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // 5. Print the result
    printf("Sum of all array elements = %d\n", sum);

    return 0;
}

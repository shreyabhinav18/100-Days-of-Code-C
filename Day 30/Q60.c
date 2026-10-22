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
    
    // 4. Initialize counters
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    // 5. Traverse the array and check each element
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;  // Element is exactly 0
        }
    }
    
    // 6. Print the result in the required format
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);
    
    return 0;
}

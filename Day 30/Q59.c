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
    int even_count = 0;
    int odd_count = 0;
    
    // 5. Traverse the array and check for even/odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // 6. Print the result in the required format
    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    
    return 0;
}

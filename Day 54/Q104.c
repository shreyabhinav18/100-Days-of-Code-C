#include <stdio.h>

int main() {
    long long n;

    // 1. Read n
    printf("Enter n: ");
    scanf("%lld", &n);

    // 2. Total sum from 1 to n
    long long total = n * (n + 1) / 2;

    // 3. Binary search for x such that x * x == total
    long long low = 1, high = n, ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == total) {
            ans = mid;
            break;
        } else if (mid * mid < total) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // 4. Print result
    printf("%lld\n", ans);

    return 0;
}

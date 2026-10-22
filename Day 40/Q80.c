#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // 1. Read the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // 2. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            
            // 💡 OPTIMIZATION: You can calculate the sum right here!
            // If the row index (i) matches the column index (j), add it to the sum.
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    // 3. Print the result
    printf("\nSum of the main diagonal elements = %d\n", sum);

    return 0;
}

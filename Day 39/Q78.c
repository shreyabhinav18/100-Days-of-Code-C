#include <stdio.h>

int main() {
    int n;
    int sum = 0; // Initialize sum to 0

    // 1. Read the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // 2. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate the sum of the main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Row index equals column index
    }

    // 4. Print the result
    printf("\nSum of the main diagonal elements = %d\n", sum);

    return 0;
}

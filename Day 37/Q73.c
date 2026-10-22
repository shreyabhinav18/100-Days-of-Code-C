#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. Declare the 2D array and the 1D array for row sums
    int matrix[rows][cols];
    int row_sums[rows];

    // 3. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Calculate the sum of each row and store in the array
    for (int i = 0; i < rows; i++) {
        int sum = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum; // Store the row's total in the 1D array
    }

    // 5. Print the result
    printf("\nRow sums stored in the array:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, row_sums[i]);
    }

    return 0;
}

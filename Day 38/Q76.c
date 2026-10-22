#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; // Flag to assume it's symmetric initially

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. A non-square matrix can never be symmetric
    if (rows != cols) {
        printf("The matrix is not symmetric (it must be a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    // 3. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Compare element at (i, j) with element at (j, i)
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Found a mismatch
                break;           // No need to check further in this row
            }
        }
        if (isSymmetric == 0) {
            break;               // No need to check further rows
        }
    }

    // 5. Print the result
    if (isSymmetric) {
        printf("\nThe matrix is a Symmetric matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Symmetric matrix.\n");
    }

    return 0;
}

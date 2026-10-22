#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. Declare the original matrix and the transpose matrix
    int matrix[rows][cols];
    // Note: The transpose matrix has dimensions swapped
    int transpose[cols][rows]; 

    // 3. Read the original matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Compute the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Swap the row and column indices
            transpose[j][i] = matrix[i][j]; 
        }
    }

    // 5. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 6. Print the transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

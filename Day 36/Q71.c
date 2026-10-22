#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. Declare the 2D array
    int matrix[rows][cols];

    // 3. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Print the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Using \t (tab) to keep the columns aligned neatly
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}

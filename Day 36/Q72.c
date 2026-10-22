#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0; // Initialize sum to 0

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

    // 4. Calculate the sum of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; // Add current element to sum
        }
    }

    // 5. Print the result
    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}

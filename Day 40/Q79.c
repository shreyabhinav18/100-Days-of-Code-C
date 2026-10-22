#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // 2. Read the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // 3. Print the upper half of the diagonals (starting from the top row)
    for (int start_col = 0; start_col < cols; start_col++) {
        int r = 0;
        int c = start_col;
        
        // Move diagonally down-left
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    // 4. Print the lower half of the diagonals (starting from the rightmost column)
    // We start from row 1 because row 0 was already covered in the previous loop
    for (int start_row = 1; start_row < rows; start_row++) {
        int r = start_row;
        int c = cols - 1;
        
        // Move diagonally down-left
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}

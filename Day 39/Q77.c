#include <stdio.h>

int main() {
    int rows, cols;
    int isDistinct = 1; // Flag: 1 means distinct, 0 means duplicate found

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

    // 3. Find the size of the main diagonal
    // For a rectangular matrix, the diagonal goes up to the smaller dimension
    int diag_size = (rows < cols) ? rows : cols;

    // 4. Check for duplicates using a nested loop
    for (int i = 0; i < diag_size; i++) {
        for (int j = i + 1; j < diag_size; j++) {
            // Compare diagonal element at [i][i] with [j][j]
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Found a duplicate
                break;
            }
        }
        if (isDistinct == 0) {
            break; // No need to check further if duplicate is found
        }
    }

    // 5. Print the result
    if (isDistinct) {
        printf("\nAll elements on the main diagonal are distinct (unique).\n");
    } else {
        printf("\nThe main diagonal contains duplicate elements.\n");
    }

    return 0;
}

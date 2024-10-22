#include <stdio.h>

// Define the maximum number of non-zero elements (for simplicity)
#define MAX 100

// Structure to represent a sparse matrix element
struct SparseElement {
    int row;
    int col;
    int value;
};

int main() {
    // Define a simple 4x5 matrix
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // Array to store the non-zero elements
    struct SparseElement sparseMatrix[MAX];
    int nonZeroCount = 0;

    // Traverse the matrix and store non-zero elements
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix[nonZeroCount].row = i;
                sparseMatrix[nonZeroCount].col = j;
                sparseMatrix[nonZeroCount].value = matrix[i][j];
                nonZeroCount++;
            }
        }
    }

    // Print the sparse matrix representation
    printf("Sparse Matrix Representation (Row, Column, Value):\n");
    for (int i = 0; i < nonZeroCount; i++) {
        printf("(%d, %d, %d)\n", sparseMatrix[i].row, sparseMatrix[i].col, sparseMatrix[i].value);
    }

    return 0;
}

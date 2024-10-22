#include <stdio.h>

#define SIZE 3 // Size of the matrices

void subtractMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = mat1[i][j] - mat2[i][j];
}

void displayMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix1[SIZE][SIZE] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[SIZE][SIZE] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[SIZE][SIZE];

    subtractMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResult of Subtraction:\n");
    displayMatrix(result);

    return 0;
}


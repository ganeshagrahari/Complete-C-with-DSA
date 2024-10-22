/*#include<stdio.h>
int main()
{
    int r, c,arr1[][],arr2[][],mul[][];
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);
    printf("Enter the first matrix: ");
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Multiply:\n");
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            mul[i][j]=0;
            for(int k=0;k<j;k++){
                mul[i][j]+=
            }
        }
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int row1,col1,row2,col2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);

    // Input elements of the first matrix
    int matrix1[row1][col1];
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);

    // Input elements of the second matrix
    int matrix2[row2][col2];
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (col1 != row2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }


    // Multiply matrices
    int result[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}



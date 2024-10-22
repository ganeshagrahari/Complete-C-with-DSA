#include <stdio.h>
int main()
{
    int result[3][3];
    int arr1[3][3] = {{1, 2, 3},
                      {2, 4, 6},
                      {2, 4, 6}};
    int arr2[3][3] = {{7, 12, 13},
                      {21, 42, 64},
                      {12, 22, 22}};
    // adding array--------->
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // printing result:-----
    printf("the result is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", result[i][j]);
        }
    }
    return 0;
}

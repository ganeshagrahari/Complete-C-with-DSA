#include <stdio.h>
int main()
{
    // 1D Array----->
    //  int marks[4];
    //  marks[0]=34;
    //  marks[1]=34;
    //  marks[2]=34;
    //  marks[3]=34;
    //  marks[4]=34;
    //  printf("marks of student 1 id %d\n", marks[0]);
    //  marks[0]=344;
    //  printf("marks of student 1 id %d\n", marks[0]);

    // users input:--
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter element for array element %d\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter element for array element no. %d is %d\n", i, marks[i]);
    }

    // 2nd method:--->
    //   int marks[4]={12,23,24,45};

    // 2D ARRAY------>
    //  int marks[2][4]={{4,5,6,7},
    //                   {6,8,7,7}};
    //      for(int i=0;i<2;i++){
    //          for(int j=0;j<4;j++){
    //              printf("the value of %d,%d element of an array is %d\n",i,j,marks[i][j]);
    //              printf("%d",marks[i][j]);// for printing just like matrix form

    //         }
    //         printf("\n");
    //     }
}
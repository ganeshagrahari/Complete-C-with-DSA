
// #include <stdio.h>

// int main()
// {
//     int i, j, rows, columns;

//     /* Input number of rows and columns from user */
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter number of columns: ");
//     scanf("%d", &columns);

//     /* Iterate over each row */
//     for(i=1; i<=rows; i++)
//     {
//         /* Iterate over each column */
//         for(j=1; j<=columns; j++)
//         {
//             if(i==1 || i==rows || j==1 || j==columns)
//             {
//                 /* Print star for 1st and last row, column */
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }

//         /* Move to the next line */
//         printf("\n");
//     }

//     return 0;
// }
// int main()  
// {  
//     int n,m;  
//     printf("Enter the number of rows");  
//     scanf("%d",&n);  
//     m=n;  
//    for(int i=1;i<=n;i++)  
//    {  
//        for(int j=1;j<i;j++)  
//        {  
//            printf(" ");  
//        }  
//        for(int k=1;k<=m;k++)  
//        {  
//            printf("*");  
//        }  
//        m--;  
     
//       printf("\n");  
//     }  
//     return 0;  
// } 
              // Write a program to check that no. is divisible by 2

#include<stdio.h>
int main(){
    int x ;
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x%2 ==0){
        printf("The number is divisible by 2");
    }
    else{
        printf("Your number  is't divible by 2");
    }
    return 0;
}
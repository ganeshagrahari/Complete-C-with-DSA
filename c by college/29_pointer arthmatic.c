/*
THERE are 4 main operation:------->
++
--
+
-
*/
#include<stdio.h>
int main()
{
 //+
   /* int a =34;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    return 0;*/
  //++
    int a =34;
    int *ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    return 0;
  //++
    // int a =34;
    // int *ptra=&a;
    // printf("%d\n",ptra);
    // ptra--;
    // printf("%d\n",ptra);
    // return 0;
 //ARRAY AND POINTER:---->
  int arr[]={1,2,3,4,5,6,67};
   printf("%d",arr[0]);
   printf("the address of first element is %d \n",&arr[0]);
   printf("the address of first element is %d \n",&arr[1]);


   printf("the value at address of first element is %d \n",*(&arr[0]));
   printf("the value at address of first element is %d \n",*(&arr[1]));


}




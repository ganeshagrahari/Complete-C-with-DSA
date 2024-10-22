//Q--->Find outputs--->
#include<stdio.h>
int main(){
    
int *ptr;
int x;

ptr=&x;
*ptr= 0;

printf("x = %d\n", x);//0
printf("ptr = %d\n", *ptr);//0

*ptr +=5;//x =5
printf(" x = %d\n ", x);
printf(" *ptr = %d\n", *ptr);

(*ptr)++;//x=6
printf(" x =%d\n",x);//6
printf("*ptr  = %d\n", *ptr);//6
return 0;
}

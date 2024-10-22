#include<stdio.h>
int main(){
    printf("lets learns about pointer\n");
    int a =76;
    int *ptra=&a;
    printf("the value of a is %d\n",a);
    printf("the address of pointer of  a is %d\n",*(&ptra));
return 0;
}
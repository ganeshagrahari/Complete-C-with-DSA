#include<stdio.h>
int sum(int a ,int b){
    return a+b;
}
int main()
{
    printf("sum of 1 and 2 is %d\n",sum(1,2));
    int(*fPtr)(int,int);//declear function pointer
    fPtr = &sum;// creating a function pointer 
    int d= (*fPtr)(4,6);
    printf("the value of is %d\n ",d);

    
    return 0;
}


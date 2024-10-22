// POINTER IN FUNCTION CALL:----
/*
1--> Call by value:-->We pass value of variables as argument
2--->Call by Reference :--> We pass address as argument

*/
// Call by value

/*#include <stdio.h>
void square(int n)
{ 
    n = n * n;
    printf("%d\n", n);
}

int main()
{
    int number = 4;
    square(number);// Here only change in copy of a variable
    printf("number = %d\n", number);
}
*/
// Call by reference

/*#include <stdio.h>
void _square(int *n)
{ 
    *n = (*n) * (*n);
    printf("%d\n", *n);
}
int main()
{
    int number = 4;
    _square(&number);// Here we change direct in address
    printf("number = %d\n", number);
}*/


//Questions--->

//Q1--> Swap 2 numbers, a&b.
//Call by value:- Dose not work
/*#include<stdio.h>
void swap( int a, int b){
    int t =a;
    a=b;
    b=t;
    printf("a=%d & b = %d\n",a,b );
    
}
int main(){
    int x =3;
    int y=5;
    swap(x,y);
    printf("x=%d & y = %d\n",x,y );
    return 0;
}*/

//Call by Reference:-> Its works!
/*#include<stdio.h>
void _swap( int *a, int *b){
    int t =*a;
    *a=*b;
    *b=t;
    printf("a=%d & b = %d\n",*a,*b );
    
}
int main(){
    int x =3;
    int y=5;
    _swap(&x,&y);
    printf("x=%d & y = %d\n",x,y );
    return 0;
}*/


//Q2---> Will the address output be same?
/*#include<stdio.h>

void printAddress(int n){
     printf("%p\n", &n);
}
int main(){
    int n =4;
    printf("%p\n", &n);
    printAddress(n);// yaha par copy of n hi store ho raha hai isliye address of n and n same nhi hoga
}*/

//Q3--> Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main fuction.
#include<stdio.h>
void dowork(int a , int b, int *sum, int *mul, int *avg){
     *sum= a+b;
     *mul = a*b;
     *avg = (a+b)/2;

}

int main(){
   int a =3, b = 5;
   int sum, mul,avg;
   dowork(a,b, &sum,&mul,&avg);
   printf("sum = %d, multiply = %d, averge=%d",sum,mul,avg );
}

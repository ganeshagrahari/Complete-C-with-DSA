// nested if else:
/*
Syntax:---
if(condition){
    if(condition){
        printf("hello");
    }
    else{
        printf("world!";)
    }
else{
    printf("no more!");
}
}
*/

//CODES------>
/*#include<stdio.h>
int main(){
    int a=8;
    if (a%2==0){
        if(a%7==0){
            printf("a is divisible by both");
        }
        else{
            printf("a is only divisible of 2");
        }
    }
    else{
         printf("a is not divisible by both 2 and 7.");
    }
    
}*/
// compare 3 numbers:----
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is  greater");
        }
        else{
            printf("c is greater");
        }
    }
   
    
    
}
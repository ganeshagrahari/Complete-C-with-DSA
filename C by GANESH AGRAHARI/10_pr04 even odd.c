#include<stdio.h>
int main(){
    int x ;
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x%2 ==0){
        printf("The number is even");
    }
    else{
        printf("Your number  is odd");
    }
    return 0;
}
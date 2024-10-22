#include<stdio.h>
int main(){
    int a,b;
    char opr;
    printf("Enter  your (+,-,*,/): ");
    scanf("%c",&opr);
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    switch (opr) {
    
    case '+' :printf("%d",a+b);
              break;
    case '-': printf("%d",a-b);
             break;
    case '*' :printf("%d",a*b);
             break;
    case '/' : printf("%d",a/b);
             break;
    }
}
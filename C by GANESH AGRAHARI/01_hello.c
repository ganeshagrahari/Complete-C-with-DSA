/*#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    if (a>b){
        printf("a is greater");
    
    }
    else{
        printf("b is greater");
    }
}*/
#include<stdio.h>
int main() {
    float rad;
    printf("enter your radius :");
    scanf("%f",&rad);
    printf("area is :%f",3.14*rad*rad);
}

#include<stdio.h>
int main() {
    int n,sum,i;
    sum=0;
    printf("enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        sum=sum+i;

    }
    printf("sum is : %d",sum);
}
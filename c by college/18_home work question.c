#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter value of n: ");
    scanf("%d",&n);
    sum =0;
    for(i=1;i<=n;i++){
        sum = sum +i;
    }
    printf("the sum is : %d", sum);
}
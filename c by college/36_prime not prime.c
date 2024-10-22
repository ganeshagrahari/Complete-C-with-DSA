#include<stdio.h>
int main()
{
    printf("enter your no.: ");
    int n, flag =1;
    scanf("%d",&n);
 
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
        
    }
    if(flag==0){
        printf("no. is not  prime!");
    }
    else{
        printf("no. is prime");
    }
    return 0;
}

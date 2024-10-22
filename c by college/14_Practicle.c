/*int main()
{
    int n ,i,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count==2){
        printf("Prime");
    }
    else{
        printf("not prime");
    }
}*/
/*#include<stdio.h>
int main(){
    int num , count  , fact=1;
    printf("enter num: ");
    scanf("%d",&num);
    for (count = 1;count<=num;count++){
        fact= fact*count;
    }
    printf("The factorial of a number %d",fact);
    return 0;

}*/
// FEBONAACI SERIES
/*#include<stdio.h>
int main(){
    int n ,i ,c ,a=0,b=1;
    printf("enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}*/
//SUM OF N NATURAL NO...
/*#include<stdio.h>
int main(){
 int i,n,sum;
 sum=0;
 printf("Enter no. n: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    sum=sum+i;
 }
 printf("the sum is %d",sum);

}*/

#include<stdio.h>
int main(){
    int num ,count,fact=1;
    printf("Enter ur no. for factorial: ");
    scanf("%d",&num);
    for(count =1;count<=num;count++){
        fact=fact*count;
    }
    printf("the fct is %d",fact);
    
}


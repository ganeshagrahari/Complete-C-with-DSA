      //**************EASY332
//  1----->print ;sum of 20 natural no.
/*#include<stdio.h>
int main(){
    int sum, i;
    sum =0;
    for (i=1;i<=20;i++){
        sum =sum+i;
    }
    printf("Sum of 20 natural number is: ");
    printf("%d",sum);
}*/
 //2----> program to print odd no. btw 1-20
 /*#include<stdio.h>
int main(){
    int i;
    printf("odd no. btw 1 to 20 is:\n ");
    for (i=1;i<=20;i++){
        if (i%2!=0){
            
            printf("%d\n",i);
        }
    }  
}*/
    //3-------> Program to print greatest of four number:----
/*#include<stdio.h>
int main(){
    int a,b,c,d,A,B;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);
    printf("enter d: ");
    scanf("%d",&d);
    printf("Greatest number is: \n");
    if (a>b){
         A=a;
    }
    else{
         A=b;
    }
    if (c>d){
         B=c;
    }
    else{
        B=d;
    }
    if(A>B){
        printf("%d",A);    
    }
    else{
        printf("%d",B);
    }
}
     */

    //4------>   check the no is prime of not.
/*#include<stdio.h>
int main(){
    int num,i;
    printf("Enter your number: ");
    scanf("%d",&num);
    int flag=0;
    for(i=2;i<=num-1;i++){
        if (num%i==0){
            flag =1;
        }
        
        }       
         
if(flag==1){
    printf("Prime number");
}
else{
    printf(" not prime!");
}

    }

    //*****************HARD
  //1--->printing factorial--  
 #include <stdio.h>
int main(){
    int num,a;
    printf("Enter your number: ");
    scanf("%d",&num);
    a = num-1;
    while(a!=0){
        num=num*a;
        a--;
    }
    printf("the factorial of number is%d",num);
    printf("%d",num);


/*int main(){
    int a,i;
    printf("enter your no: ");
    scanf("%d",&a);
    a =i-1;
    while(i!=0){
        a=a*i;
        a--;
    }
    printf("the factorial is %d",a);
    printf("%d",a);
    

}*/
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
        print("not prime");
    }
}*/
int main(){
    int 
}
    
    


// 1------>print sum of n natarual no.
/*#include<stdio.h>
int main(){
    int i,n,sum;
    printf("Enter your n: ");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n){
        sum =sum+i;
        i++;
    }
    printf("The sum of n natural number is %d",sum);


}*/

  //2------->print a table of num enter by user:--

/*#include<stdio.h>
int main(){
    int i,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    i=1;
    
    while(i<=10){
       
       
        printf("%d\n",n*i);
         i++;
    }
    


}  */
//3---->keep taking input from user until user enters an odd number-->
/*#include<stdio.h>
int main(){
    int a;
 
    do{
        printf("Enter your number: ");
        scanf("%d",&a);
        printf("%d\n",a);

        if(a%2!=0){
            break;
        }
    }
    while(1);
    printf("Thank you!!");
    
}*/
  
  //4-----> stop taking number if num if multiple of 7
/*#include<stdio.h>
int main(){
    int a;
 
    do{
        printf("Enter your number: ");
        scanf("%d",&a);
        printf("%d\n",a);

        if(a%7==0){
            break;//breake hmko nested loop se bhi exit kara deta hai. for  ur kind information

        }
    }
    while(1);
    printf("Thank you!!");
    
}  */
   //5---------> skip 3 an dprint 1 to 10
/*#include<stdio.h>
int main(){
    for (int i=1; i<=10; i++){
        if (i==3){// it uses  for skipping 
            continue;
        }
        printf("%d\n",i);
    }

}  */ 
   //6--> print odd number from 5 to 50--------->
/*#include<stdio.h>
int main(){
    for (int i=5; i<=50; i++){
        if (i%2==0){// it uses  for skipping 
            continue;
        }
        printf("%d\n",i);
    }

} */

 //6------->  print the factorial of a number n->
/*#include<stdio.h>
int main(){
    int n, i,fact;
    fact=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
   printf("Factorial of  the no. is %d",fact); 

}  */
 //7----> print reverse of the table for a number n.
 /*#include<stdio.h>
int main(){
    int n, i;
    
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The reverse table of number  n is\n");
    for(i=10;i>=1;i--){
        printf("%d\n",n*i);
    }
    

}*/
 //8--> calculate the sum all number btw 5 and 50
#include<stdio.h>
int main(){
    int sum, i;
    sum =0;
    
   
    for(i=5;i<=50;i++){
        sum=sum+i;
    }
    printf("the of the number btw 5 to 50 is %d",sum);
} 





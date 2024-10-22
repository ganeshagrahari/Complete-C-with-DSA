//1------> Sum of n natural  numbers
/*
n->1+2+3+4+5--------n-1+n=sum(n-1)+n
5->1+2+3+4+5=sum(4)+5
4->1+2+3+4=sum(3)+4
3->1+2+3=sum(2)+3
2->1+2=sum(n-1)+3
1->1
*/
/*#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);// sum of 1 to n
    int sumN=sumNm1+n;
}
int main(){
    printf("sum is %d",sum(5));
}
*/
//2--->factorial n->
/*
5!=5x4x3x2x1
4!=4x3x2x1
3!=3x2x1
2!=2x1
1!=1
fact(n)=fact(n-1)xn
*/

/*int fact(int n){
    //Base case most important in recursion
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;

}
int main(){
   printf("Factorial is : %d", fact(5));
}*/


//q--->write a function to convert celsius to farenheit......
//formula--> f=(c*9/5)+32
/*#include<stdio.h>
float coverttemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return far;
}
int main(){
    float far = coverttemp(37);
    printf("far: %f", far);
    return 0;
}*/

//q---> Write a fuunction to calculate percentage of a student from marks in science ,math & sanskrit .
/*float percent(float math, float science, float sanskri ){
    return ((science+math+sanskri)/3);
}
int main(){
    float sc =98.0;
    float math = 95.0;
    float sanskrit =99.0;
    printf("The percentage is : %f", percent(sc,math,sanskrit));

    return 0;
}*/

//q-----> Write a function to print febonacci series Sequence ---->
//Formula-> fibonnaci(n)=fib(n-1)+fib(n-2)
/*int fib(int n){
    //base condition
  
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("The fibonacci of %d is : %d\n",n,fibN);
    return fibN;
}
int main(){
    printf("%d",fib(6));
    return 0;

}*/


//q---> Write a function to print sum of digits 
/*#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
   int sumNm1=sum(n-1); 
   int sumN=sumNm1+n;
   return sumN;

}
int main(){
    printf("the sum is %d",sum(8));

}*/

//q---> write a fuction to fine sqare root of a function---->

/*#include<stdio.h>
#include<math.h>
float sqareroot(float n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    float ans=sqrt(n);
    printf("The sqare root is %f",ans);
}
int main(){
    sqareroot(50.0);
}*/

//Q---> Write a function to print hot and cool depend on temprature enterd by user
/*#include<stdio.h>
int tempC(int temperature){
    if(temperature>50){
        printf("HOT!!!!!");
    }
    else if(temperature<50 && temperature>25){
        printf("NORMAL!!!");
    }
    else{
        printf("COLD!!!");
    }
}
int main(){
    int temp;
    printf("Enter your tempture: ");
    scanf("%d",&temp);
    tempC(temp);
}*/

//Q---> make your pow function->
#include<stdio.h>
int pow(int n){

}
int main(){
   int a =5;
   
   


}




         //1-------------> funtion for addtion
/*#include<stdio.h>                //void ---kuch return nhi karta hai...............
int add(int a, int b){
    return a+b;
}
int main(){
    int c = add(4,11);
    int d =add(10,10);
    int f =(c+d)*100;
    printf("%d",f);
}*/
             //adding two numbers second method --->
/*#include<stdio.h>
int add(int a, int b){
    printf("%d\n",a+b);
}
int main(){
    add(4,5);
    add(4000,5);
    add(4,65);
}*/
              //2--------> function for  marks input and  division
/*#include<stdio.h>
int marks(a){
    if (a>60){
        printf("First divsion");
    }
    else if(a>=50 && a<60){
        printf("Second divsion");
    }
    else if(a>=33&& a<50){
        printf("third divsion");
    }
    else{
        printf("fail");
    }
}
int main (){
    marks(55);
}*/
       //3---->question

#include<stdio.h>
#include<math.h>
int main(){
      int i=0;
      int sum =0;
      for(i = 0; i<=100;i++){
        if (i%6==0&& i%7==0 && i%10==0 &&i%12!=0){
            sum = sum+i; 
            printf("%d",i);  
        }   
    }
    printf("%d",sum);
}



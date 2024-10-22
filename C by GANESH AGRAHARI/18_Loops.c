// lopps control instructions--->
/*
To repeat some parts of program 

Types------>1.For,2.While,3.Dowhile



*/

   //1. For LOOP--->
/*#include<stdio.h>
int main(){
    // i= iterator : counter 
    int i;
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    }
}*/
  //increment operator-->
  /*#include<stdio.h>
int main(){
     
    int i=1;
    printf("%d\n",i++);//i++ use than increase(Post increament operator)
    printf("%d\n",i);

    printf("%d\n",++i);//increase  than use(preincrement)
    printf("%d\n",i);    
}*/
  //Decrement operator-->
  /*#include<stdio.h>
int main(){
     
    int i=1;
   /* printf("%d\n",i--);//i--use than decrease(Post increament operator)
    printf("%d\n",i);

    printf("%d\n",--i);//decrease than use(preincrement)
    printf("%d\n",i);    
}*/

/*#include<stdio.h>
int main(){
    for (float i =1.0;i<=5.0;i++){
        printf("%f\n",i);
    }
}*/
/*#include<stdio.h>
int main(){
    for (char ch ='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
}
*/
   //infinite loop
/*int main(){
    for (int i =1; ;i++){
        printf("%d\n",i);
    }
}   */
      //2. WHILE LOOP
/*#include<stdio.h>
int main(){
    int i =1;
    while(i<=5){
        printf("%d\n",i);
        i++;    }
} */
    //q--->print the number from 0 given by user
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter your n: ");
    scanf("%d",&n);
    int i =0;
    while(i<=n){
        printf("%d\n",i);
        i++;    }
}   */

   //3.DO WHILE LOOP at least run at one time
#include <stdio.h>
int main(){
    int i=1;
    do{
        printf("%d",i);
        i++;
        
    }
   while (i<=5);
   
   

}          



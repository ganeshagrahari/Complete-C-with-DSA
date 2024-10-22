/*#include<stdio.h>
int main(){
// print the average  of three number 
    /*int x ,y,z;
    printf("Enter your x : ");
    scanf("%d",&x);
    printf("Enter your y : ");
    scanf("%d",&y);
    printf("Enter your z : ");
    scanf("%d",&z);
    printf("the average of three no. is %d",(x+y+z)/3);*/
  //2------> check the no. given by user is digit or not  
#include<stdio.h>
int main(){
  char x;
  printf("Enter a charector \n");
  scanf("%d", &x);
  if (x>='0'&& x<='9'){
    printf("Number is digit.");
  }
  else{
    printf("number is not digit.");
  }

}
  //3-----> write a program to print smallest  
  /*int a ,b;
  printf("Enter a : ");
  scanf("%d",&a);
  printf("Enter b : ");
  scanf("%d",&b);
  if (a>b){
    printf("a is grater...");
  }
  if (a==b){
    printf("a is equal to b...");
  }
  else {
    printf("b is grater...");
  }

return 0;

}*/
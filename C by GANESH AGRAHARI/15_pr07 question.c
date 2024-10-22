     //1-----------> write a program to check student is pass or fail if mark>30 pass and marks<=30 fail...
/*#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks>30){
        printf("PASS!!");
    }
    else{
        printf("Fail!!!");
    }
}*/

       //2----------->  grading system
/*#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks<30){
        printf("C");
    }
    else if (marks>=30&& marks<70){
        printf("B");
    }
    else if (marks>=70&& marks<90){
        printf("A");
    }
    else if (marks>=90&& marks<100){
        printf("A+");
    }
    else{
        printf("Fail!!!");
    }
}  */     
          //3----------> This will not  throws an error because it uses assignment opperator:--->

/*#include<stdio.h>
int main(){
    int x=2;
    if (x=1){
        printf("X is equal 1");
    }
    else{
        printf("X is not equal to 1");
    }
}  */

       //4---->Write a progarm to check if a charector enterd by user is upper case or not
#include<stdio.h>
int main(){
    char ch;
    printf("Enter your charector: ");
    scanf("%c", &ch);
    if (ch>='A' && ch <='Z'){
    
       printf("Upper case!\n");
    }
    else if (ch>='a' && ch <='z'){
        printf("Lower case!\n");
    }
    else{
        printf("Not english\n");
    }
    return 0;
}               


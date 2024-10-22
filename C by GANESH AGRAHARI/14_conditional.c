//conditional statement
//TYPE:---->1. if-else 2. switch
//1. if-else:
/*if(condition){
    do something if true;
}
else{
    do somthing if false;
}

*/
/*#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("Adult!\n");
        printf("You can vote!\n");
        printf("You can drive!");
    }
   
    else{
        printf("Not Adult !\n");
        printf("You cannot vote!\n");
        printf("You cannot drive!\n");

    }
    printf("Thank you!");
    return 0;

}*/
      // ----nested if condition ----> printing no. is +ive as well as even or odd
/*#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if (num>=0){
        printf("Positive number\n");
        if (num%2==0){
            printf("Even number.\n");   
        }
        else{
            printf("Odd number\n");
        }
    }
}   */   
//2----->ternary  operator:-
       //SYNTAX---> condition?dosomthing if true : dosomthing if false 

/*#include<stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",age);

    age >=18? printf("Adult\n"):printf("not adult!");
}    */


//3.---->Switch Operator:-
                /*SYNTAX-->
                   Switch(number){
                    case C1://do something
                           breake;
                    case C2://do somthing
                           breake;
                    default://do somthing              
                   }*/
/*#include<stdio.h>
int main(){
    int day; //1-mon;2-tues;3-wed.....
    printf("Enter  day(1-7): ");
    scanf("%d",&day);
    switch (day) {
    
    case 1 : printf("Monday\n");
              break;
    case 2 : printf("tuesday\n");
             break;
    case 3 : printf("Wednesday\n");
             break;
    case 4 : printf("Thursday\n");
             break;
    case 5 : printf("Friday\n");
             break;
    case 6 : printf("Saturday\n");
             break;
    case 7 : printf("Sunday\n");
             break;
    default: printf("Not a valid day!");    
    
    
    }
} */    
       //switch properties 
       /*
       a.Case can be in any order 
       */              
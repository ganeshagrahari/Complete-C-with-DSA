//ARRAY-->
/*
->Collection of similar data types stored at Contiguous(ek bad ek line se store hota hai) memory location.
->SYNTAX----->
int marks[3];
char name[10];
float price[2];
\\In c language there is 0based indexing.

->Input and output--->
scanf("%d",&marks[0]);
printff("%d",marks[0]);
*/
/*#include<stdio.h>
int main(){
    int marks1=97;
    int marks2=99;
    int marks3=85;

    int marks []= {97,99,85};
    return 0;
    int marks[3];
    printf("enter physics: ");
    scanf("%d",&marks[0]);
    printf("enter chemistry: ");
    scanf("%d",&marks[1]);
    printf("enter maths: ");
    scanf("%d",&marks[2]);

    printf("Physics=%d,Chemistry=%d,Maths=%d",marks[0],marks[1],marks[2]);
}*/


//QUESTIONS-------->
//Q--> Write a program to enter price of 3 items & print their final cost with GST.
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter 3 prices: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price of 1 : %f\n",price[0]+(0.18*price[0]));
    printf("Total price of 2 : %f\n",price[1]+(0.18*price[1]));
    printf("Total price of 3 : %f\n",price[2]+(0.18*price[2]));
}


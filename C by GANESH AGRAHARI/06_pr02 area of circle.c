//Write a program to calculate area  of a circle
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("Area is %f", 3.14*radius*radius);
    return 0;
}
#include<stdio.h>

float coverttemp(float celsius){
    float far = celsius*(9/5)+32;
    return far;
}
int main(){
    float far = converttemp(0);
    printf("far: %f", far);
 
}
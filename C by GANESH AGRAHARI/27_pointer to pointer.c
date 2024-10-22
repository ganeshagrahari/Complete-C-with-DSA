#include<stdio.h>
//Synatx---->
/*
int**pptr;
char**pptr;
float**pptr;
*/
int main(){

    // float price =100.00;
    // float *ptr=&price;
    // float **pptr =&ptr;

//q----->print value of 'i' from its pointer to pointer

    int i =5;
    int *ptr = &i;
    int **pptr=&ptr;
    printf("%d",**pptr);



    return 0;

}
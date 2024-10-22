// POINTER ARITHMETIC:---
/*
pointer can be increment & decrement
*/
// CASE 1-->
/*#include<stdio.h>
int main(){
int age = 22;
int *ptr =&age;
printf("ptr = %u\n",ptr);
ptr++;
printf("ptr = %u\n",ptr);
ptr--;
printf("ptr = %u\n",ptr);
return 0;

}*/

// Case 2
/*#include <stdio.h>
int main()
{
    float price = 20.00;
    float *ptr = &price;

    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
}*/

/*
 

*/
#include<stdio.h>
int main(){
int age = 22;
int _age=23;
int *ptr= &age;
int *_ptr =&_age;
printf("diffrence = %u\n",ptr-_ptr);
printf("compare = %u\n",ptr==_ptr);
return 0;

}


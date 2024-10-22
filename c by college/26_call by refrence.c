#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int x=34,y=88;
    printf("%d and %d\n",x,y);
    swap(&x,&y);
    printf("%d and %d",x,y);
}
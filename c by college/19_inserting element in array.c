
#include<stdio.h>


void insert(int*n,int pos,int array[]){
    *n=*n+1;
    int i=*n;
    

    for(i=*n;i>pos;i--){
        array[i+1]=array[i];

    }
    array[pos]=10;

}
int main(){  
    int array[5]={10,12,30,12,1};
    int n=5;
    insert(&n,2,array); 

     int i=0;
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    } 

}
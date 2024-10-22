#include<stdio.h>

void display(int arr[], int n ){

    for(int i = 0; i<n ;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    //code for deltions...
}
int deletion(int arr[],int size,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for (int i =index;i<size;i++) {
       arr[i] =arr[i+1];
    }
    
    return 1;
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5,index=2;
    display(arr,size);
    
    deletion(arr,size,100,index);
    size-=1;
    display(arr,size);
}


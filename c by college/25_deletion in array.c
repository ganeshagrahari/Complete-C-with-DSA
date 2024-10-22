 #include<stdio.h>
 void display(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
 }
 int deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
 }
int main(){
     int arr[100]={7,3,12,27,88};
     int size =5, index=1;
     display(arr,size);

    deletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;

}
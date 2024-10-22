#include<stdio.h>
int linerasearch(int arr[],int size,int element){
    for(int i =0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high=size-1;
    //start searching--keep searching untill low<=high 
        while(low<=high)
    {    
        mid =(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        //searching ends....
    }
    return -1;

}
int main(){
    //unsorted array for linear search------>
    //int arr[]={1,3,4,5,88,77,5,44,22,12};
    //int size=sizeof(arr)/sizeof(int);

    //sorted array for linear search------>
    int arr[]={1,3,4,5,23,35,39,44,55,102};
    int size=sizeof(arr)/sizeof(int);
    int element=404;
   // int searchIndex=linerasearch(arr,size,element);
    //printf("the element %d was found at index %d \n",element,searchIndex);

    int searchIndex=binarysearch(arr,size,element);
    printf("the element %d was found at index %d \n",element,searchIndex);
    return 0;
}
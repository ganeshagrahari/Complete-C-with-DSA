#include<stdio.h>
int main()
{
    int n;
    printf("enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
   int max=arr[0];
   int min=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }
   }
   int sum =min +max;
   printf("the sum is : %d",sum);
    
    


    /*int arr[5]={1,2,3,4,9};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sum=min+max;
    printf("%d",sum);
    */
    return 0;
}

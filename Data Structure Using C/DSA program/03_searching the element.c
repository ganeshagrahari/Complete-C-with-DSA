#include<stdio.h>
int main()
{
    int arr[30],i,j,ele,num;
    printf("Enter the number of elements: ") ;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element what you want to search: ");
    scanf("%d",&ele);
     i=0;
    while(i<num && ele!=arr[i]){
        i++;
    }
    if(i<num){
        printf("Number found the location is :%d " ,i+1);

    }
    else{
        printf("Number not found !!");
    }
    
    return 0;
}

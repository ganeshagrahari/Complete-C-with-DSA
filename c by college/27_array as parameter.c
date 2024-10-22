#include <stdio.h>
int func1(int array[]){
    for(int i=0;i<4;i++){
        printf("%d\n",array[i]);
      
    }
}
int main()
{
    int arr[] = {23, 13, 120, 34};
    func1(arr);
    return 0;
}
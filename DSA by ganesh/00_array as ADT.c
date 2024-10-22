#include<stdio.h>
#include<stdlib.h>
struct my_Array{
    int total_size;  //memory to be reserverd...
    int used_size;   //memory to be used...
    int *ptr;

};
void createArray(struct my_Array* a,int tSize,int uSize){
    //(*a).total_size=tSize;
    //(*a).used_size=tSize;
    //(*a).ptr =(int *)malloc(tSize * sizeof(int));

    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr =(int *)malloc(tSize * sizeof(int));
}
void show(struct my_Array *a){
    for(int i= 0;i < a->used_size; i++){
        printf("%d\n",(a->ptr)[i]);

    }
}
void setval(struct my_Array *a){
    int n;
    for(int i= 0;i< a->used_size;i++){
        printf("Enter element %d : ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;

    }
}
int main()
{
    struct my_Array marks;
    createArray(&marks,10,2);
    printf("we are running setval fxn\n");
    setval(&marks);
    printf("we are running show fxn\n");
    show(&marks);
   
return 0;
}
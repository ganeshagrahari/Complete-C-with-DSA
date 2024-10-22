//breake;
/*#include<stdio.h>
int main(){
    int a;
 
    do{
        printf("Enter your number: ");
        scanf("%d",&a);
        printf("%d\n",a);

        if(a%7==0){
            break;//breake hmko nested loop se bhi exit kara deta hai. for  ur kind information

        }
    }
    while(1);
    printf("Thank you!!");
    
}*/


// continue-->
  
#include<stdio.h>
int main(){
    for (int i=1; i<=5; i++){
        if (i==3){// it uses  for skipping 
            continue;
        }
        printf("%d\n",i);
    }

}

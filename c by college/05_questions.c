
// #include<stdio.h>
// int main(){

       /// print 1-50 should be divible by 5 and 7 or 6
   /* int i=1;
    for(i = 1; i<=50;i++){
        if (i%5==0 && i%7==0 && i%10!=0 || i%6==0){
            printf("%d\n",i);
        }
    }*/
   /*int a =5;
    int b =a>4;
    int c = a>4;
    int d = b+c;
    printf("%d",d);
    
    
    
}*/
     /////q----->  #include<stdio.h>
#include<math.h>
int main(){
      int i=0;
      int sum =0;
      for(i = 0; i<=100;i++){
        if (i%6==0&& i%7==0 && i%10==0 &&i%12!=0){
            sum = sum+i; 
            printf("%d",i);  
        }   
    }
    printf("%d",sum);
}

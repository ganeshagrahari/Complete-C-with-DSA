// write to print hello and write a function to print good bye
/*#include<stdio.h>
void printhello(){
    printf("Hello everyone!\n");
}
void printgoodbye(){
    printf("good bye !");
}
int main(){
    printhello();
    printgoodbye();

}*/

//2--->
/*#include<stdio.h>
void namaste(){
    printf("Namaste!\n");
}
void bonjour(){
    printf("Bonjour!\n");
}
int main(){
    char na;
    printf("Enter your nationality For indian enter i and  for french enter f: ");
    scanf("%c",&na);
    if(na=='i'){
        namaste();
    }
    else if(na =='f'){
       bonjour();
    }

}*/
//3--->function for adding two number
/*#include<stdio.h>
int sum(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int s  =sum(a, b);
    printf("The sum is %d",s);
    return 0;

}*/
//4--->function for printing table of entered number
/*#include<stdio.h>
void table (int x){
    printf("The table of the number is:\n");
    for(int i=1; i<=10;i++){
        printf("%d\n",x*i);
    }
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    table(n);
    return 0;
}*/
// 6---->printing adding 18%gst in all thing---->
/*#include<stdio.h>
void calculateprice(float value){
    value = value +(0.18*value);
    printf("The final price is : %f\n",value);
}
int main(){
    float value = 100.0;
    calculateprice(value);
    printf("The actual value is %f",value);
    return 0;

}*/

// 7-------->Use librery fuction to calculate the sqare of a number given by user:------
/*#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("The sqare of a number is %f",pow(n, 2));
}*/

 // 8---> make a fuction to calculate area of a sqare , a circle and a reactangle....
 #include<stdio.h>
float sqarearea(float side){
    return side*side;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float araereactangle(float length ,float width){
    return length*width;
}
int main(){
    float a =5.0;
    float b =10.0;

    printf("area of reactangle is  : %f\n",araereactangle(a,b));
    printf("area of circle is : %f\n",circlearea(a));
    printf("area of square is  : %f\n",sqarearea(a));

}


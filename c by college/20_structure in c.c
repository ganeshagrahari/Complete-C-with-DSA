//Q----->
#include<stdio.h>
struct student{
    int rollno;
    char name[10];
    float marks;
  
};
int main(){
    struct student s1;
    s1.rollno = 4;
    s1.marks=25.2;
    strcpy(s1.name,"XYZ");
    printf("%d",s1.rollno);


}
//Q--->
/*#include<stdio.h>
struct student{
    int rollno;
    float marks;
    char a;
};
int main(){
    struct student s1= {1,7.5,'x'};
    struct student s2={2,8.5,'y'};
}*/



/*#include<stdio.h>
struct student { 
    int rollno;
    float marks;
    char a;
};
int main() {
struct student S1;
S1.rollno =5;
S1.marks=7.8;
S1.a='g';
printf("%d\n",S1.rollno);
printf("%f\n",S1.marks);
printf("%c",S1.a);

}*/
//q--->
#include<stdio.h>
struct marks{
    int marks;
};
int main(){
    struct marks s1;
    struct marks s2;
    struct marks s3;
    s1.marks=98;
    s2.marks=100;
    s3.marks=96;
    int A ,B;
    if(s1.marks>s2.marks && s1.marks>s3.marks){
        printf("s.1 marks is grater");   
    }
    if(s2.marks>s1.marks && s2.marks>s3.marks){
        printf("s.2 marks is grater");   
    }
    if(s3.marks>s1.marks && s3.marks>s1.marks){
        printf("s.3 marks is grater");   
    }

    return 0;
   
  
}

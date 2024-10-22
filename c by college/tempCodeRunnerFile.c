//Q----->
/*#include<stdio.h>
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


}*/
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



#include<stdio.h>
struct student { 
    int rollno;
    float marks;
    char a;
};
int main() {
struct student S1;
S1.rollno =5;
S1.marks=7.8;
S1.a=7.5;
printf("%d",S1.rollno);
printf("%f",S1.marks);
printf("%c",S1.a);




}

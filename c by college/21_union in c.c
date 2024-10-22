#include<stdio.h>
union student {
    int rollno;
    float marks;
    double semmarks;
};
int main(){
    union student s1;
    s1.rollno=28;
    s1.marks=7.5;
    s1.semmarks=9.8;

    printf("%d\n",s1.rollno);
    printf("%f\n",s1.marks);
    printf("%lf\n",s1.semmarks);
}

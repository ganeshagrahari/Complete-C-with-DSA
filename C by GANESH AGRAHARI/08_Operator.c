/*operators--->
  a.Arthematic : +,-,*,/
  b. Relational: ==,<=,>=,!=,<,>
  c.Logical:AND(*)&&, OR||(+), NOT!
  d.Bitwise:
  e.Assingment:
  f.Ternary or conditional operator
  */
#include<stdio.h>
#include<math.h>
int main(){
//b.Relational-->
    /*printf("%d\n", 4==4); //true =1,false=0.
    printf("%d\n", 4>=4); //true =1,false=0.
    printf("%d\n", 4<=4); //true =1,false=0.
    printf("%d\n", 4!=4); //true =1,false=0.
    printf("%d\n", 4>5); //true =1,false=0.
    printf("%d\n", 4<5); //true =1,false=0.*/
//c.Logical-->
    /*printf("%d\n",5>1&&6>1);
    printf("%d\n",5>1&&6>10);
    printf("%d\n",5>1||6>10);
    printf("%d\n",!(5>1||6>10));*/
    //operator precedence--->!>(*,/,%)>(+,-)>(<,>=,>=)>(==,!=)>&&>||>=
//e. Assignment operator--->=,+=,-=,*=,/=,%=
   /*int a =4;
   int b = 6;
    a+= b;
    a-= b;
    a*= b;
    a/= b;
    a%= b;
    printf("%d\n",a);
}*/

//f. Ternary or conditional operator----->
    int a;
    printf("Enter a no. btw 1 to 10 : ");
    scanf("%d",&a);
    (a>=5)?printf("you can!"):printf("you can't do this!");
    return 0;
}
//RECURSION:-- when a function calls itself, it's called recursion.
/*Maths:--
 * f(x)=x^2 
  f(1)=1^2=1
  f(2)=2^2=4
  f(3)=3^2=9
 * f(f(x))=? x=2
  ->f(2^2)
  ->f(4)=4^2=8
 *f(f(f(x)))=? x=2
   ->f(f(f(2)))
   ->f(f(4))
   ->f(8)=64
*/
//e.g-->print "Hello World" five times
void printhw(int count){
    if (count==0){
        return;
    }
    printf("hello world!\n");
    printhw(count -1);
}
int main(){
    printhw(10);
}


/*
PROPERTIES OF RECURSION:---->
A.Anything that can be done with Iteration, can be done with recursion and vice-versa.
B.Base Case is the condition which stops recursion.
C.Iteration has infinite loops & Recursion has Stack overflow.
*/

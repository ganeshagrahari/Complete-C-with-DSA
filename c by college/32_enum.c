#include<stdio.h>
/*
keywords=enum
:user define datatype
           0      1        2        3         4      5       6
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
*/
    enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};

int main()
{
    enum week today;
    today=wednesday;
    printf("day %d\n",today);
    printf("day %d\n",today+1);
    
    return 0;
}

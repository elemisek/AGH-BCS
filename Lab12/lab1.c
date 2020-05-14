#include <stdio.h>
#define SQ2(x) x*x
#define SQ3(x) (x)*(x)
#define SQ4(x) ((x)*(x))
#define PR(X) printf("kwadratem " #X " jest %d \n",X)
#define PP printf(" \n ********** \n")
#define plus_i(p) a##p
int main(void)
{
int a=2;
PR(SQ2(7));
PR(SQ3(7));
PR(SQ4(7));
PP;
PR(SQ2(2+3));
PR(SQ3(2+3));
PR(SQ4(2+3));
PP;
PR(4/SQ2(2));
PR(4/SQ3(2));
PR(4/SQ4(2));
PP;
a=2;
PR(SQ2(++a));
a=2;
PR(SQ3(++a));
a=2;
PR(SQ4(++a));
int plus_i(3),plus_i(1);
a3=2;
a1=1;
printf("plus_i(3) = %d plus_i(1) = %d",a3,a1);
return 0;
}

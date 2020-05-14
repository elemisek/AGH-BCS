#include<stdio.h>
int fib(int n)
{
    if(n<2)
        return n;
    return fib(n-1) + fib(n-2);
}
int fib_i (int n)
{
    int a=0,b=1,c=a+b,i;
    for(i=1; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(void) {
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    printf("fib(%d) = %d, fib_i(%d) = %d", n, fib(n),n, fib_i(n));
    return 0;
}

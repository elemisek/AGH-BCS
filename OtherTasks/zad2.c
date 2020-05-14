#include <stdio.h>
int *podloga(float *a, float*b)
{
    int *wynik;
    int w=1;
    w=*a**b;
    wynik=&w;
    return wynik;
}

int main(void)
{
    float a,b;
    a=2.9;
    b=2.9;
    printf("%d",*podloga(&a,&b));
}


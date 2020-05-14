#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double los(int a, int b)
{
return (double) rand()/RAND_MAX*(b-a)+a;
}

struct zespolona{
double re;
double im;
}l;

void zesp_wypisz(struct zespolona l)
{
printf("(%f + %f*i)", l.re, l.im);
}

struct zesp_modul{
struct zespolona l;
double modul;
void (*funkcja)(struct zespolona l);
}wsk;

void mod(struct zesp_modul *zesp)
{
double a=zesp->l.re;
double b=zesp->l.im;
double wynik;
wynik=a*a+b*b;
wynik=sqrt(wynik);

zesp->modul=wynik;
}

int compare (const void *arg1, const void *arg2)
{
        struct zesp_modul *e1=(struct zesp_modul *)arg1;
        struct zesp_modul *e2=(struct zesp_modul *)arg2;
        double a=e1->modul;
        double b=e2->modul;
        if (a<b)
                return -1;
        else if (a==b)
                return 0;
        else return 1;
}

int main(void)
{
srand(time(NULL));
int n;
printf("podaj liczbe \n");
scanf("%i", &n);
struct zesp_modul *wsk;
wsk=malloc(n*sizeof(struct zesp_modul));

for(int i=0;i<n;i++)
{
wsk[i].l.re=los(0,10);
wsk[i].l.im=los(0,10);
printf("|");
wsk[i].funkcja=zesp_wypisz;
zesp_wypisz(wsk[i].l);
mod(&wsk[i]);
printf("|= %f \n", wsk[i].modul);
}

printf("\n po sortowaniu: \n");

qsort(wsk, n, sizeof(struct zesp_modul), compare);

for(int i=0;i<n;i++)
{
wsk[i].funkcja(wsk[i].l);
printf("\n");
}

free (wsk);

return 0;
}

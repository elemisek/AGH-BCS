#include <stdio.h>
unsigned bity(int x, int p, int n)
{
    int b[10]= {0};
	int i=0; 
	int a=0 
	int t=1;;
    while(x)
    {
        tab[i++]=x%2;
        x>>=1;
    }
    for(int j=0; j<n; j++)
    {
        a+=(b[j+p]*t);
        t*=2;
    }
    return a;

}
int main(void)
{
    unsigned wynik, liczba = 18;
    wynik = bity(liczba, 1, 4);
    printf("%d",wynik);
    return 0;

}

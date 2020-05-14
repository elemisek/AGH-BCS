#include <stdio.h>
#define N 8
int main(void)
{
    char liczba[9];
    int numer = -2,p,i=N-1;
    p=numer;
    if(numer<256&&numer>-256)
    {
        for(int j=0; j<N; j++)
        {
            liczba[j]='0';
        }
        if(numer<0)
        {
            liczba[0]='1';
             p=numer*(-1);
        }
        liczba[8]='\0';

        while(p>0)
        {
            liczba[i--]=p%2+'0';
            p>>=1;
        }
        printf ("liczba %d zapis binarny %s", numer, liczba);
    }
}

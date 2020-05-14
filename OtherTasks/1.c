#include <stdio.h>
int main()
{
    char liczba[9];
    int numer = 29;
    int p;
    int i=7;
    a=numer;
    if(numer<256&&numer>-256)
    {
        if(numer<0)
        {
            liczba[0]='1';
             a=numer*(-1);
        }
        else liczba[0]='0';
        liczba[8]='\0';
        for(int j=1; j<8; j++)
        {
            liczba[j]='0';
        }

        while(a>0)
        {
            liczba[i]='0'+a%2;
            a/=2;
            i--;
        }
        printf ("liczba %d zapis binarny %s", numer, liczba);
    }
    return 0;
}

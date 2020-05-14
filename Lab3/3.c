#include <stdio.h>

int bitcount(int x)
{
    int b=0;
    do
    {
        if(x%2==1)
            b++;
        x>>=1;
    } while(x>0);
    return b;
}

// <3 <3 <3

int main ()
{
    int wynik, liczba = 19;   // 10011
    wynik = bitcount(liczba);
    printf("Liczba %d ma bitow ustawionych na 1: %d \n",liczba, wynik);  // Liczba 19 ma bitow ustawionych na 1: 3
    getchar();
    return 0;
}

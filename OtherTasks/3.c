#include <stdio.h>

int bitcount(int x)
{
    int b=0;
    do
    {
        if(x%2)
            b++;
        x*=2;
    } while(x>0);
    return b;
}
int main ()
{
    int wynik, liczba = 28;
    wynik = bitcount(liczba);
    printf("Liczba %d ma bitow ustawionych na 1: %d \n",liczba, wynik);
    getchar();
    return 0;
}

#include <stdio.h>
// p - pozycja , n - to liczba bitów
unsigned bity(int x, int p, int n)
{
    int tab[1000]= {0}, i=0, wynik=0, mnoznik=1;;
    while(x)
    {
        tab[i++]=x%2;
        x>>=1;
    }
    for(int j=0; j<n; j++)
    {
        wynik+=(tab[j+p]*mnoznik);
        mnoznik*=2;
    }
    return wynik;

}
int main(void)
{
    unsigned wynik, liczba = 18; // 10010
    wynik = bity(liczba, 1, 4); // 3 bity od pozycji 1, czyli: 1 001 0
    printf("%d",wynik); // 001 = 1
    return 0;

}

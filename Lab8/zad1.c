#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
float rand_float (float a, float b) {

    return (a + (rand()/(1.0 * RAND_MAX)) *(b-a));    // losowane wartości zmiennoprzecinkowej z zakresu od a do b
}
void wypisz  (float T[], int ilosc)  //należy dopisać definicję funkcji
{
    for(int i=0; i < N; ++i)
        printf("%f\n",T[i]);
    printf("\n\n");


}
void przesun (float T[], int dlugosc, int ile)  //należy dopisać definicję funkcji
{
    ile%=dlugosc;
    if(ile==0)
        return;
    float temp;
    for(int j=0; j<ile; j++)
    {

        temp=T[dlugosc-1];

        for(int i=N-1; i>0; i--)
        {

            T[i]=T[i-1];
        }
        T[0]=temp;
    }


}
int main () {

    float w, z,  B[N];
    int o_ile,i;

    w = 0;
    z = 10;
    for(i=0; i < N; ++i)  // wypełnienie tablicy  losowymi liczbami
        B[i] = rand_float( w, z);

//wypisanie tablicy

    wypisz (B, N);

//wczytanie wartości zmiennej o_ile
scanf("%d",&o_ile);

    przesun (B, N, o_ile);
    wypisz (B, N);

    return 0;
}

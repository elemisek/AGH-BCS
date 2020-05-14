#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define n 10
int rand_int (int a, int b)
{

    return (a + rand()%(b-a+1));    // losowane wartości całkowitej z zakresu od a do b
}
void wypisz  (int T[], int ilosc)  //należy dopisać definicję funkcji
{
    for(int i=0; i < ilosc; ++i)
        printf("%d\n",T[i]);
        printf("\n\n");


}

int main(void)
{
    int tab[N],count[n]={0};
    for(int i=0; i<N; i++)
    {
        tab[i]=rand_int(0,n-1);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
            {
                if(tab[j]==i)
                {
                count[i]++;
            }
    }




}
wypisz(tab,N);
for(int i=0;i<n;i++)
{
    if(count[i]==1)
        printf("%d ",i);
}
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

float rand_float (float a, float b)
{

    return rand()%1000/100.0;
}
int suma(int *wsk_1, int *wsk_2)
{
    int sum=0;
    while(wsk_1<=wsk_2)
    {
        sum+=*wsk_1;
        wsk_1+=1;
    }
    return sum;
}
int main(void)
{
    time_t czas;
    srand( (unsigned int)time(&czas) );
    int tab[N];
    for(int i=0; i<100; i++)
    {
        tab[i]=i+10;
    }

printf("suma wszystkich elementow w tablicy = %d\n",suma(tab,tab+N-1));
for(int i=0;i<N;i+=10)
{
    printf("suma elementow od %d do %d = %d\n",i,i+9,suma(tab+i,tab+i+9));
}

}

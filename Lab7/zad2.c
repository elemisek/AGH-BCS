#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int (int a, int b)
{
    return (a + rand()%(b-a+1));
}
void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(void)
{
    time_t czas;
    srand((unsigned int)time(&czas));
    int n=10;
    int tab[10];
    for(int i=0; i<n; i++)
    {
        tab[i]=rand_int(0,10);
    }
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2==1)
        {
            for(int j=i; j<n; j++)
            {
                if(tab[j]%2==0)
                {
                    swap(&tab[j],&tab[i]);
                    break;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",tab[i]);

    }

}


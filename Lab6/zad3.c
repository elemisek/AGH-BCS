#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int rand_int (int a, int b)
{

    return (a + rand()%(b-a+1));
}
int maxmin(int p,int tab[])
{
    int max,in_max, min, in_min;
    max=tab[p];
    min=tab[p];
    in_min=p;
    in_max=p;
    for(int i=p; i<20; i++)
    {
        if(tab[i]>max)
        {
            max=tab[i];
            in_max=i;
        }
        if(tab[i]<min)
        {
            min=tab[i];
            in_min=i;
        }
    }
    return in_min;
}
void sortowanie(int tab[])
{
    int temp,j;
    for (int i = 0; i < 20; i++)
    {
        j=maxmin(i,tab);
        temp=tab[i];
        tab[i] = tab[j];
        tab[j]=temp;
        
    }

}
int main(void)
{
    time_t czas;
    srand( (unsigned int)time(&czas) );
    int temp;
    int tab[20];
    for(int i=0; i<20; i++)
    {
        tab[i]=rand_int(123,456);
    }
    for(int i=0; i<20; i++)
    {
        printf("%d\n",tab[i]);
    }
    sortowanie(tab);
    printf("\n\n\n");
     for(int i=0; i<20; i++)
    {
        printf("%d\n",tab[i]);
    }
    
    
}

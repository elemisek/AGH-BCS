#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int rand_int (int a, int b)
{

  return (a + rand()%(b-a+1));
}
int main(void)
{
time_t czas;
srand( (unsigned int)time(&czas) );
int n=10;
//int temp;
int tab[10];
for(int i=0;i<n;i++)
{
    tab[i]=rand_int(10,100);
}
for(int i=0;i<n;i++)
{
    printf("element[%d] = %d\n",i,tab[i]);
}
printf("\nPo zamianie:\n\n");
for(int i=0;i<n/2;i++)
{
//temp=tab[i];
//tab[i]=tab[9-i];
//tab[9-i]=temp;
tab[i]= tab[i] + tab[9-i];
tab[9-i]= tab[i] - tab[9-i];
tab[i]= tab[i] - tab[9-i];
}
for(int i=0;i<n;i++)
{
    printf("element[%d] = %d\n",i,tab[i]);
}

}

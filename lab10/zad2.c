#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double los(int a, int b)
{
return (double) rand()/RAND_MAX*(b-a)+a;
}


struct elast_tab
{
int licznik;
float srednia;
float wyniki[];
}a;

float srednia(float *t, int count)
{
double suma=0;
float sr;
for (int i=0;i<count;i++)
{
suma=suma+*t;
t++;
}
sr=(double)suma/count;
return sr;
}

struct elast_tab *alok(int dl)
{
struct elast_tab *wsk;
wsk=malloc(sizeof(struct elast_tab) + dl*sizeof(float));

return wsk;
}


int main(void)
{
srand(time(NULL));
int dlugosci_eleast[] = {3,6,4,2};
struct elast_tab *tab_wsk_elast[4];
for(int i=0;i<4;i++)
{
tab_wsk_elast[i]=alok(dlugosci_eleast[i]);

for(int j=0;j<dlugosci_eleast[i];j++)
        tab_wsk_elast[i]->wyniki[j]=los(0,10);

tab_wsk_elast[i]->srednia=srednia(tab_wsk_elast[i]->wyniki,dlugosci_eleast[i]);
}

for(int i=0;i<4;i++)
{
printf("struct %d \n", i);
printf("tablica wyniki[]:");
for(int j=0;j<dlugosci_eleast[i];j++)
{
printf("%f , ", tab_wsk_elast[i]->wyniki[j]);
}
printf("\nsredni wynik: %f \n", tab_wsk_elast[i]->srednia);
}

for(int i=0;i<4;i++)
free (tab_wsk_elast[i]);

return 0;
}

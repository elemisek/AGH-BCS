#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int rand_int (int a, int b){
 
  return (a + rand()%(b-a+1));
}  
void wypisz(int tab[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d",tab[i]);
}
printf("\n");

}
void dodaj(int skalar, int tab[],int n)
{
	int i=n;
	while(skalar>0)
	{
		if((skalar+tab[i])<10)
		{	
		tab[i]+=skalar;
		skalar=0;
		}
		else
		{
		tab[i]=((tab[i]+skalar)%10);
		skalar=1;
		}
		i--;
	}
}
void pomnoz(int skalar, int tab[])
{
	int i=80,p=0;
	for(int i=81;i>0;i--)
	{
		tab[i]=((tab[i]*skalar)+p)%10);
		p=((((tab[i]*skalar)+p)-((tab[i]*skalar)+p)%10)/10);
	}

}
int main(void)
{
	int skalar,n=81;
	time_t czas;   
  	srand( (unsigned int)time(&czas) );
	scanf("%d",&skalar);
	int tab[81];
	tab[0]=0;
		for(int i=1;i<n;i++)
			{
				tab[i]=rand_int(0,9);
			}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80
char rand_char(char *tab)
{
	for(int i=0;i<N;i++)
	{
		if(rand()%2)
		{	
			tab[i]= 'a'+rand()%26;
		}
		else
		{
			tab[i]='A'+rand()%26;
		}
 

	}
}
void my_strchr(char *tab,int key)
{
	int count=0;
for(int i=0;i<N;i++)
{
	if(tab[i]==key)
	{
		printf("\nPozycja = %d",i);
		count++;
	}
}
if(count)
printf("\nilosc wystapien = %d",count);
else
printf("\nPodany znak nie wystepuje w ciagu");
printf("\n");
}
char * my_strchr2(char *tab,int key)
{
for(int i=0;i<N;i++)
	if(tab[i]==key)
		return tab+i;
}
int main(void)
{
	char tab[N];
	char key;
	char * a;
	int b;
int count=0;

	rand_char(tab);
	scanf("%c",&key);
	for(int i=0;i<N;i++)
	{
		
 	printf("%c ",tab[i]);

	}
	a=tab;
while(strchr(a,key)!=NULL)
{
	b=(strchr(a,key)-tab)/(sizeof(char));
	printf("\nPozycja = %d" ,(strchr(a,key)-tab)/(sizeof(char)));
	a+=(b+1);
	count++;
}
printf("\nilosc wystapien = %d", count);


}

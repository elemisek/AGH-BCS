#include <stdio.h>
#include <time.h>
#include <limits.h>
int* where(int * tab,int n)
{
    int max, max_in=-1;
    int j;
    for(j=0;tab[j]%2!=0;j++);
    max=tab[j];
    max_in=j;
    for(int i=j; i<n; i++)
    {
        if((tab[i]%2==0)&&(tab[i]>max))
        {
            max=tab[i];
            max_in=i;
        }
    }
    if(max_in==-1)
        return NULL;
    return tab+max_in;
}
void max_3(int *a,int *b,int *c)
{
 if(a!=NULL&&b!=NULL&&c!=NULL)
 {
     if(*a>=*b&&*a>=*c)
     {
         printf("tablica: %d wartosc: %d adres: %d",1,*a,a);
     }
     else if(*b>=*a&&*b>=*c)
     {
         printf("tablica: %d wartosc: %d adres: %d",2,*b,b);
     }
     else if(*c>=*a&&*c>=*b)
     {
         printf("tablica: %d wartosc: %d adres: %d",3,*c,c);
     }
 }
if(a==NULL&&b==NULL&&c==NULL)
    printf("Brak parzystych");
else if(a==NULL&&b==NULL&&c!=NULL)
    printf("tablica: %d wartosc: %d adres: %d",3,*c,c);
else if(a==NULL&&b!=NULL&&c==NULL)
    printf("tablica: %d wartosc: %d adres: %d",2,*b,b);
else if(a!=NULL&&b==NULL&&c==NULL)
    printf("tablica: %d wartosc: %d adres: %d",1,*a,a);
else if(a!=NULL&&b!=NULL&&c==NULL)
{
    if(*a>=*b)
    printf("tablica: %d wartosc: %d adres: %d",1,*a,a);
    else
    printf("tablica: %d wartosc: %d adres: %d",2,*b,b);
}
else if(a!=NULL&&b==NULL&&c!=NULL)
{
    if(*a>=*c)
    printf("tablica: %d wartosc: %d adres: %d",1,*a,a);
    else
    printf("tablica: %d wartosc: %d adres: %d",3,*c,c);
}
else if(a==NULL&&b!=NULL&&c!=NULL)
{
    if(*c>=*b)
    printf("tablica: %d wartosc: %d adres: %d",3,*c,c);
    else
    printf("tablica: %d wartosc: %d adres: %d",2,*b,b);
}
}
int rand_int (int a, int b)
{

    return (a + rand()%(b-a+1));    // losowane wartości całkowitej z zakresu od a do b
}
int main(void)
{
    int *a,*b,*c;
    time_t czas;
    srand( (unsigned int)time(&czas) );
    int tab1[5],tab2[11], tab3[15];
    printf("tablica 1: ");
    for(int i=0; i<sizeof(tab1)/sizeof(tab1[0]); i++)
    {
        tab1[i]=rand_int(-10,10);
        printf("%d ",tab1[i]);

    }
    printf("\ntablica 2: ");
    for(int i=0; i<sizeof(tab2)/sizeof(tab2[0]); i++)
    {
        tab2[i]=rand_int(-10,10);
        printf("%d ",tab2[i]);
    }
    printf("\ntablica 3: ");
    for(int i=0; i<sizeof(tab3)/sizeof(tab3[0]); i++)
    {
        tab3[i]=rand_int(-10,10);
        printf("%d ",tab3[i]);
    }
    printf("\n\n");
    a=where(tab1,sizeof(tab1)/sizeof(tab1[0]));
    b=where(tab2,sizeof(tab2)/sizeof(tab2[0]));
    c=where(tab3,sizeof(tab3)/sizeof(tab3[0]));
    max_3(a,b,c);
    printf("\n\n");
   return 0;
}


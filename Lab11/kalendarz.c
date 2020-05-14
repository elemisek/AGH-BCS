#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int max_days=42;

int main(int argc, char **argv)
{
    if(argc!=3)
    {
        printf("Podano bledne dane wejsciowe.\n");
        return 0;
    }

    int month[max_days];
    int num_of_days=atoi(argv[1]);
    char *first_day=argv[2];
    int spaces=0;

    printf("Ilosc dni: %d\nPierwszy dzien miesiaca: %s\n\n", num_of_days, first_day);

    printf("Pon\tWt\tSr\tCzw\tPt\tSob\tNiedz\n");

    if(!strcmp(first_day, "poniedzialek"))
        spaces=0;
    else if(!strcmp(first_day, "wtorek"))
        spaces=1;
    else if(!strcmp(first_day, "sroda"))
        spaces=2;
    else if(!strcmp(first_day, "czwartek"))
        spaces=3;
    else if(!strcmp(first_day, "piatek"))
        spaces=4;
    else if(!strcmp(first_day, "sobota"))
        spaces=5;
    else if(!strcmp(first_day, "niedziela"))
        spaces=6;

    for(int i=0; i<max_days; ++i)
        month[i]=0;

    for(int i=spaces; i<=num_of_days+spaces; ++i)
        month[i]=i-spaces+1;

    for(int i=0; i<num_of_days+spaces; ++i)
    {
        if((spaces+month[i-1])%7==0)
            printf("\n");
        if(month[i]==0)
            printf(" \t");
        else
            printf("%d\t", month[i]);
    }

    return 0;
}


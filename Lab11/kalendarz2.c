nano#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if(argc!=3)
    {
        printf("Podano bledne dane wejsciowe.\n");
        return 0;
    }
    int max_days,sp;
    int *month;
    int year=atoi(argv[2]);
    char *month_name=argv[1];
    int month_num;
    int spaces=0;
    int day;
    printf("Miesiac: %s\nRok: %d\n", month_name, year);



    if(!strcmp(month_name, "styczen"))
    {
        max_days=31;
        month_num=1;
    }
    else if(!strcmp(month_name, "luty"))
    {
        if((year%4==0)&&(year%100!=0)||(year%400==0))
            max_days=29;
        else
            max_days=28;
        month_num=2;
    }
    else if(!strcmp(month_name, "marzec"))
    {
        max_days=31;
        month_num=3;
    }
    else if(!strcmp(month_name, "kwiecien"))
    {
        max_days=30;
        month_num=4;
    }
    else if(!strcmp(month_name, "maj"))
    {
        max_days=31;
        month_num=5;
    }
    else if(!strcmp(month_name, "czerwiec"))
    {
        max_days=30;
        month_num=6;
    }
    else if(!strcmp(month_name, "lipiec"))
    {
        max_days=31;
        month_num=7;
    }
    else if(!strcmp(month_name, "sierpien"))
    {
        max_days=31;
        month_num=8;
    }
    else if(!strcmp(month_name, "wrzesien"))
    {
        max_days=30;
        month_num=9;
    }
    else if(!strcmp(month_name, "pazdziernik"))
    {
        max_days=31;
        month_num=10;
    }
    else if(!strcmp(month_name, "listopad"))
    {
        max_days=30;
        month_num=11;
    }
    else if(!strcmp(month_name, "grudzien"))
    {
        max_days=31;
        month_num=12;
    }

    day=1;
    for(int i=2019;i>year;i--)
    {
        if((i%4==0)&&(i%100!=0)||(i%400==0))
        {
            day=((day-366)%7);
            day+=7;
            day%=7;
        }

        else
        {
            day=((day-365)%7);
            day+=7;
            day%=7;
        }
    }
    if(month_num>=2)
        day=(day+31)%7;
    if(month_num>=3)
        day=(day+28)%7;
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        day=(day+1)%7;
    if(month_num>=4)
        day=(day+31)%7;
    if(month_num>=5)
        day=(day+30)%7;
    if(month_num>=6)
        day=(day+31)%7;
    if(month_num>=7)
        day=(day+30)%7;
    if(month_num>=8)
        day=(day+31)%7;
    if(month_num>=9)
        day=(day+31)%7;
    if(month_num>=10)
        day=(day+30)%7;
    if(month_num>=11)
        day=(day+31)%7;
    if(month_num>=12)
        day=(day+30)%7;

    spaces=day;
    sp=spaces;
    printf("Pon\tWt\tSr\tCzw\tPt\tSob\tNiedz\n");
    for(int i=1; i<=max_days+sp; i++)
    {
        if(spaces>0)
        {
            printf(" \t");
            spaces--;
        }
        else
        {
            printf("%d\t",i-sp);
            if(i%7==0)
                printf("\n");
        }
    }
    //------------------------------------------------
//    month=(int*)malloc(max_days*sizeof(int));
//
//    printf("%d %d\n-----------\n",day,max_days);
//
//    for(int i=0; i<max_days; ++i)
//        month[i]=0;
//
//    for(int i=spaces; i<=max_days+spaces; ++i)
//        month[i]=i-spaces+1;
//
//    printf("Pon\tWt\tSr\tCzw\tPt\tSob\tNiedz\n");
//
//    for(int i=0; i<max_days+spaces; ++i)
//    {
//
//        if((spaces+month[i-1])%7==0)
//            printf("\n");
//        if(month[i]==0)
//            printf(" \t");
//        else
//            printf("%d\t", month[i]);
//    }


    return 0;
}


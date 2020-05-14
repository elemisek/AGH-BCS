#include <stdlib.h>
#include <stdio.h>
#define N 4
int i = 0;
int first = 0;
void push(int *tab, int p)
{
    if(i>=N)
    {
        printf("FULL\n");
        return;
    }
    tab[(first+i)%(N)]=p;
    i++;
    return;
}

void pop(int *tab)
{
    tab[first]=0;
    first=((first+1)%N);
    i--;
    return;
}
void show(int *tab)
{
    if(i==0)
    {
        printf("EMPTY\n");
        return;
    }

    for(int j=first; j<first+i; j++)
    {
        printf("%d ",tab[j%(N)]);
    }
    printf("\n");
    return;
}
int main()
{
    int tab[N];
    char c;
    int a;

    do
    {

        printf("p - pop\nu - push\ns - show\ne - exit\n");
        scanf("%c%*c", &c);
        if(c=='p')
            pop(tab);
        else if(c=='s')
            show(tab);
        else if(c=='u')
        {
            printf("Enter your number:\n");
            scanf("%d%*c", &a);
            push(tab,a);
        }
    }
    while(c!='e');


}

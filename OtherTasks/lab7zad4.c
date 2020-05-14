#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
struct wektor
{
    double x;
    double y;
};
struct abc
{
    struct wektor w;
    double dlugosc;
};
void poluj(struct abc * temp)
{
    for(int i=0;i<10;i++)
        temp[i].dlugosc=sqrt(temp[i].w.x*temp[i].w.x+temp[i].w.y*temp[i].w.y);


}
int main()
{
    struct abc tab[10];
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        tab[i].w.x=rand()%50;
        tab[i].w.y=rand()%50;
    }
    return 0;
}

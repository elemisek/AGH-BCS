#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct zxy
{
char znak;
struct zxy *wst;
}a,b,c;

int main(void)
{
struct zxy a;
struct zxy b;
struct zxy c;

a.wst=&b;
b.wst=&c;
c.wst=&a;

a.znak='a';
a.wst->znak='b';
a.wst->wst->znak='c';
printf("a) %c , %c , %c \n", a.znak, b.znak, c.znak);

b.znak='e';
b.wst->znak='f';
b.wst->wst->znak='d';
printf("b) %c , %c , %c \n", a.znak, b.znak, c.znak);

c.znak=toupper(c.znak);
c.wst->znak=toupper(c.wst->znak);
c.wst->wst->znak=toupper(c.wst->wst->znak);
printf("c) %c , %c , %c \n", a.znak, b.znak, c.znak);
return 0;
}

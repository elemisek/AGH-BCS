#include <stdio.h>

int main(void)
{
  char a[12]="ALA MA KOTA";
  int i=0;
  printf("%s\n",a); //wypisuje ALA MA KOTA
    while(a[i]!=NULL)
    {
        a[i] = tolower(a[i]);
        i++;
    }
  printf("%s\n",a); //wypisuje ala ma kota
  return 0;
}


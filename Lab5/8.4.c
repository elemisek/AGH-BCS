#include <stdio.h>
int main(void)
{
    char tekst[] = "Dlugiwyrazonieznanejdlugosci";
    int i=0,j=0;
    while(tekst[i]!='\0')
    {
        i++;
    }
    for(j=0; tekst[j]!='\0'; j++);
    printf("Dlugosc lancucha: %s -> %d \n",tekst, strlen(tekst));  //powinno spowodowac wypisanie Dlugosc lancucha: Dlugiwyrazonieznanejdlugosci -> 28
    printf("Dlugosc lancucha: %s -> %d \n",tekst, sizeof(tekst)/sizeof(tekst[0])-1);  //powinno spowodowac wypisanie Dlugosc lancucha: Dlugiwyrazonieznanejdlugosci -> 28
    printf("Dlugosc lancucha: %s -> %d \n",tekst, i);  //powinno spowodowac wypisanie Dlugosc lancucha: Dlugiwyrazonieznanejdlugosci -> 28
    printf("Dlugosc lancucha: %s -> %d \n",tekst, j);  //powinno spowodowac wypisanie Dlugosc lancucha: Dlugiwyrazonieznanejdlugosci -> 28
    return 0;
}

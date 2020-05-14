#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main(void)
{
    char word[N+1];
    srand(time(NULL));
    for(int i=0; i<N; i++)
    {
        word[i]='a'+(rand()%26);
    }
    word[N]='\0';
    printf("%s", word);
    return 0;
}

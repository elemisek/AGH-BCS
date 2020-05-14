#include<stdio.h>
#include<time.h>
#include<stdlib.h>
const int N=10;
void rysuj(char tab[N])
{
        int i;
        for(i=0; i<N; i++)
                tab[i]='0'+rand()%10;
}
void wypisz(char tab[N]){
        int i;
        for(i=0; i<N; i++)
                printf("%c", tab[i]);
}
int main(void){
        char a[N], b[N], ab[N+1];
        int i,xy, ruch=0;
        srand(time(NULL));
        for(i=0; i<N; i++)
                a[i]='0';
        for(i=0; i<N; i++)
                b[i]='0';
        rysuj(a);
        rysuj(b);
        printf(" ");
        wypisz(a);
        printf("\n+");
        wypisz(b);
        printf("\n---------------------------------------------------\n");
        for(i=0; i<N; i++)
                ab[i]='0';
        for(i=N-1; i>=0; i--){
                xy=a[i]+b[i]-2*'0';

                if(ruch==1){
                        if(xy>=9)
                                ab[i+1]='0'+(xy+ruch)%10;
                        else{
                                ab[i+1]='0'+xy+ruch;
                                ruch=0;
                        }
                }
                else{
                        if(ab>9){
                                ab[i+1]='0'+(xy)%10;
                                ruch=1;
                        }
                        else
                                ab[i+1]='0'+xy;
                }
        }
if(ruch)
    ab[0]='1';
else
    ab[0]=' ';
        for(i=0; i<N+1; i++)
                printf("%c", ab[i]);
        return 0;
}

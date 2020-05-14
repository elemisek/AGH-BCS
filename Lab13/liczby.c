#include <stdio.h>
#include <string.h>

int main()
{
    int t=100,adlugosc,bdlugosc;
    int m=0,p=0,ap=0,bp=0;
    char a[101],b[101],w[102];
    for(int i=0; i<t; i++)
    {
        scanf("%s %s",a,b);
        m=101;
        adlugosc=strlen(a);
        bdlugosc=strlen(b);
        while(adlugosc>0 || bdlugosc>0)
        {
            if(adlugosc==0)
            {
                ap=0;
            }
            else
            {
                ap=(int)a[adlugosc-1]-48;
            }
            if(bdlugosc==0)
            {
                bp=0;
            }
            else
            {
                bp=(int)b[bdlugosc-1]-48;
            }
            w[m--]=(char)((ap+bp+p)%10)+48;
            p=(ap+bp+p)/10;
            if(adlugosc>0)
                adlugosc--;
            if(bdlugosc>0)
                bdlugosc--;
        }
        if(p)
        {
            p+=48;
            w[m--]=(char)p;
        }
        p=0;
        for(int j=m+1; j<102; j++)
            printf("%c",w[j]);
        printf("\n");
    }
}

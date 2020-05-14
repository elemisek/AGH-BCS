#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{
    int x, y;
    if(argc>1)
    {

        x=atoi(argv[1]);
        y=atoi(argv[3]);

        if(strchr(*(argv+2), '+'))
            printf("%d + %d = %d", x, y, x+y);

        else if(strchr(*(argv+2), '-'))
            printf("%d - %d = %d", x, y, x-y);

        else if(strchr(*(argv+2), '*'))
            printf("%d * %d = %d", x, y, x*y);

        else if(strchr(*(argv+2), '/'))
            printf("%d / %d = %d", x, y, x/y);

        else
        {
            printf("Blad1");
            return 0;
        }

    }
    else
        printf("Blad2");
    return 0;
}

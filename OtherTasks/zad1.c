#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float rand_float (float a, float b)
{

    return (a + (rand()/(1.0 * RAND_MAX)) *(b-a));    // losowane wartości zmiennoprzecinkowej z zakresu od a do b
}


int main(void)
{
    srand(time(NULL));
    int n, n1;
    float* tab;
    float * iter;
    scanf("%d",&n);
    tab=malloc(n*sizeof(float));
    for(iter=tab; iter<tab+n; iter++)
    {
        *iter=rand_float(23.0,34.0);
        printf("%f\n",*iter);
    }
    scanf("%d",&n1);
    if(n1>n)
    {
        tab=realloc(tab, n1);
        for(iter=tab+n; iter<tab+n1; iter++)
        {
            *iter=rand_float(-20.0,-5.0);
        }
        for(iter=tab; iter<tab+n1; iter++)
        {
            printf("%f\n",*iter);
        }

    }




}


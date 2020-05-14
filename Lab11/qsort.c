#include<stdio.h>
#include<stdlib.h>

int compare(const void *arg1, const void *arg2)
{
    int *a1=(int *)arg1;
    int *a2=(int *)arg2;
    return a1-a2;
}

int main(void)
{
    /*int N=10;
    double *tab;
    //tab=malloc(N*sizeof(double));
    //tab=calloc(N, sizeof(double));
    tab=realloc(tab, (N+1)*sizeof(double));
    free(tab);*/

    //qsort(tab, N, sizeof(int), compare);

    int N=5, M=8;
    double **tab=calloc(N, sizeof(double*));
    for(int i=0; i<N; ++i)
        tab[i]=calloc(M, sizeof(double));

    for(int i=0; i<N; ++i)
        free(tab[i]);
    free(tab);
}



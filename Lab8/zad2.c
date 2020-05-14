#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_int (int a, int b) {

    return (a + rand()%(b-a+1));    // losowane wartości całkowitej z zakresu od a do b
}
void wypisz  (int T[], int ilosc)  //należy dopisać definicję funkcji
{
    for(int i=0; i < ilosc; ++i)
        printf("%f\n",T[i]);
    printf("\n\n");


}

void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int *find_min_wsk (int *tab, int n)
{
    int i, *min;
    min = tab;
    for (i = 0; i < n; i++)
        if (tab[i] < *min)
            min = tab  + i;
    return min;
}

void sort (int *tab, int n) {
    int i, *min_wsk;
    for(i = 0; i < n-1; i++) {

        min_wsk = find_min_wsk(tab + i, n - i );

        swap(tab + i, min_wsk);

    }
}
int main(void)
{
    int a=10,b=12,c=22;
    int A[10],B[12],C[22];
    for(int i=0; i<a; i++)
    {
        A[i]=rand_int(0,10);
    }
    for(int i=0; i<b; i++)
    {
        B[i]=rand_int(0,10);
    }
    sort(A,a);
    sort(B,a);
    int j=0,k=0;
    for(int i=0,k=0; i<c; i++)
    {
        if(A[j]>B[k]&&j<a)
        {
            C[i]=A[j];
            j++;
        }
        else
        {
            C[i]=B[k];
            k++;

        }


}
}

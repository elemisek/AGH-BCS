#include <stdio.h>
#include <stdlib.h>

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
min = tab+n;
for (i = 0; i < n; i++)
   if (tab[i] < *min)
        min = tab  + i;
return min;
}

void sort (int *tab, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        swap(tab+i,find_min_wsk(tab,i));
    }
    return;
}
int main(void)
{
    int n=23,idx=0;;
    int tab_A[23] = {3,5,33,1,7,9,55,1,11,22,12,6,8,4,44,6,42,2,8,26,64,80,16};
do
{
    idx++;
}
 while(tab_A[idx]%2==1);
    sort (tab_A,idx);
    sort(tab_A+idx,n-idx);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",tab_A[i]);
    }

}

#include<stdio.h>
int find(int *tab, int ile, int x)
{
    int first, last, middle;
    first = 0;
    last = ile - 1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if (tab[middle] < x)
            first = middle + 1;
        else if (tab[middle] == x)
        {
            return 1;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        return 0;
}
int main(void)
{
    int tab_A[] = {1,3,5,6,7,9,11,13,16,22,25,34,35,36,37,45,46,47,47,47,55,56,58,59};
    int x=2;
    printf("%d",find(tab_A, sizeof(tab_A)/sizeof(tab_A[0]), x));
    return 0;
}

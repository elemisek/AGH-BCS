#include<stdio.h>
int f(int n,int g)
{

    static int l=0;
    printf("%d",g);
    for(int i=0;i<g;i++)
    {
        printf(".");
    }

    l++;
    if(n==0||n==1)
    {
        printf(", Zwracam f(%d), l=%d\n",n,l);
        return n;
    }
    else
    {
        printf(", Obliczam f(%d) = f(%d) + f(%d), l=%d\n",n, n-1, n-2,l);
        return f(n-1,g+1) + f(n-2,g+1);
    }
}
int main(void) {
    int n=15;
//	printf("Podaj liczbe: ");
//	scanf("%d", &n);
    printf("\nrFibonacci(%d) = %d", n, f(n,0));
    return 0;
}

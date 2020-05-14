#include <stdio.h>
#define N 15
void wypisz (float *X, float *Y)
{
    printf("    i|");
    for(int i=0;i<N;i++)
    {
        printf("%5d|",i);
    }
    printf("\n X[i]|");
    for(int i=0;i<=14;i++)
    {
        printf("%5.0f|",X[i]);
    }
    printf("\n Y[i]|");
    for(int i=0;i<=14;i++)
    {
        printf("%5.1f|",Y[i]);
    }
    printf("\n");
}
float suma(float *X, int n)
{
    float S=0;
    for(int i=0; i<n; i++)
    {
        S += X[i];
    }
return S;
}
float suma_2(float *X, float *Y, int n)
{
    float S = 0;
    for(int i=0; i<n; i++)
    {
        S+=X[i]*Y[i];
    }
return S;
}
float delta (float *A, int ile)
{
    float a;
    a = ile*suma_2(A,A,N) - suma(A,N);
    return a;
}

int main()
{

    float X[N];
    float Y[15]={109.4, 110.1, 112.0, 114.7, 116.0, 118.1, 119.5, 121.8, 123.1, 124.9, 127.6, 129.4, 130.6, 131.9, 134.1};
    int i=0;
    X[0]=25.0;
    float a, b, delt;
    int S = 0;

    for(i=0; i<N; i++)
    {
        S+=i;
    }

    for(i=1;i<N;i++)
    {
        X[i]=(X[i-1]+5);
    }

wypisz(X,Y);
    delt=delta(X,S);
    a = (suma_2(X,Y,N)*S - suma(Y,N)*suma(X,N))/delt;
    b = (suma_2(X,X,N)*suma(Y,N) - suma_2(X,Y,N)*suma(X,N))/delt;
    printf("\n delta = %f \n\n a = %f\n\n b = %f\n",delt, a, b);


}






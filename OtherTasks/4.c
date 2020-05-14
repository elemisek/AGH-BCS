#include <stdio.h>

float suma(float X[], int n)
{
    float S=0;
    for(int i=0; i<n; i++)
    {
        S += X[i];
    }
return S;  
}
float Cauchy_elem(float X[], float Y[], int n)
{
    float S = 0;
    for(int i=0; i<n; i++)
    {
        S+=X[i]*Y[i];
    }
return S;
}

int main()
{
    int N=15;
    float X[N];  
    float Y[15]={109.4, 110.1, 112.0, 114.7, 116.0, 118.1, 119.5, 121.8, 123.1, 124.9, 127.6, 129.4, 130.6, 131.9, 134.1};
    int i=0;
    float x=25.0;
    float a, b, delta; 
    int S = 0;
    
    for(i=0; i<N; i++)
    {
        S+=i;
    }

    for(i=0;i<N;i++)
    {
        X[i]=x + 5*i;
    }
    
    
    delta = S*Cauchy_elem(X,X,N) - suma(X,N);
    b = (Cauchy_elem(X,X,N)*suma(Y,N) - Cauchy_elem(X,Y,N)*suma(X,N))/delta;
    a = (Cauchy_elem(X,Y,N)*S - suma(Y,N)*suma(X,N))/delta;
    printf("delta = %f \n b = %f\n a = %f\n",delta, b, a);
    
    
return 0; 
}
    
   




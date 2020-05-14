#include<stdio.h> //przyblizona wartosc calki w przedziale
float fun(float x)
{
return x*x*x + x*x + x + 1;
}
int main(void)
{
	float x, y, a, b, sum=0, step;
	scanf ("%f%f%f", &a,&b,&step);
	x=a;
	y=b;
	step=(y-x)/step;
	for(; x<=y; x+=step)
		sum+=fun(x);
	printf("Calka w przedziale [%f, %f] wynosi: %f", a, b, sum*step);
	return 0;
}

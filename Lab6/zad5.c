#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>
float rand_float (float a, float b)
{
  return (a + (rand()/(1.0 * RAND_MAX)) *(b-a));
}
int main(void)
{
time_t czas;
srand( (unsigned int)time(&czas) );
	long long N;
	int i, count=0;
	double x, y;
	printf("Podaj liczbe losowan: ");
	scanf("%lld", &N);
	srand(time(NULL));
	for(i=0; i<N; i++){
		x=rand_float(0,1);
		y=rand_float(0,1);
		if((x*x)+(y*y)<1)
			count++;
	}
	printf("Wynik = %f", count*4./N);
	return 0;
}


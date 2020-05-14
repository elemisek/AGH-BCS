#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define A -1.5
#define B 1.5
float rand_float(float a, float b){
	return (a+(rand()/(1.0*RAND_MAX))*(b-a));
}
int main(void){
	srand(time(NULL));
	int n;
	float *tab;
	float *iter;
	scanf("%d", &n);
	tab=malloc(n*sizeof(float));
    for(iter=tab; iter<tab+n; iter++)
    {
        *iter=rand_float(A,B);
        printf("%f\n",*iter);
    }
	return 0;
}

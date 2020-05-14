#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
 
  int a,min,max;
  float sum=0;
  time_t czas;   
 	max=118 + rand()%(286-118+1);;
 	min=118 + rand()%(286-118+1);;
  srand( (unsigned int)time(&czas) );
  for(int i=0;i < 19;++i)
  {
      a=118 + rand()%(286-118+1);
      sum+=a;
      if(a<min)
      min=a;
		if(a>max)
		max=a;
		
   }
 printf("%d\n",min);
  printf("%d\n",max);
   printf("%f\n",sum/20);
  return 0;
}
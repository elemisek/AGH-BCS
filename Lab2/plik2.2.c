#include <stdio.h>
#include <math.h>
int main()
{
	int a=0, b=0;
	
		scanf ("%d", &a);
		for(int i=2;i<sqrt(a);i++)
		{
			if(a%i==0)
			{
			b=1;	
			printf	("%d\n",i);
			printf	("%d\n",a/i);
			}
			
		}
		if(b==0)
		{
		printf	("%d is a prime number", a);
		}
	
		
}
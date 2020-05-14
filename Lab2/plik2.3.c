#include <stdio.h>
int main()
{
	float a,w,x;
	scanf("%f",&a);
	scanf("%f",&x);
	w=a*x;
	for(int i=0;i<3;i++)
	{
		scanf("%f",&a);
		w=w*x+a;
	}
	printf("%f",w);
	
	
	
	
	
	
	
}	
		

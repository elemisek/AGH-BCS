#include <stdio.h>
int main()
{
	int a=0, space=1,x;
	do 
	{
		scanf ("%d", &a);
		
	}
	while(a<0||a>9);
	for(int i=1;i<=a+1;i++)
	{
		for(int l=0;l<=a-space;l++)
		{
			printf (" ");
		}
		for(int j=a;j>a-space;j--)
		{
			printf("%d", j);
		}
		printf(" ");
		for(int k=a-space;k>=0;k--)
		{
			printf("%d", k);
		}
		printf("\n");
		space++;
	}
		
}
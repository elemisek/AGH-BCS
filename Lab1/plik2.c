#include <stdio.h>
int main()
{
	int count=0;
	
  for(int i=-5;i<=98;i++)
  {
  	if(i%4==0||i%5==0)
	{
		printf("%d\n", i);
		count++;
		
	}
  
  }
  printf("%d\n", count);
return 0;   
}
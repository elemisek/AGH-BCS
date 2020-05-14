#include <stdio.h>  
 
int main(void)
{ 
    int n,ile_20,ile_10,ile_5;
    scanf ("%d", &n);
    if(n%5!=0)
    {
    	printf("wrong number\n");
    	return 0;
    }
    else 
	{
		ile_20=n/20;
		n%=20;
		ile_10=n/10;
		n%=10;
		ile_5=n/5;
		n%=5;
		printf("%d %d %d", ile_20, ile_10,ile_5);
		
		
    	
	}	
}
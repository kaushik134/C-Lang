#include<stdio.h>
int main()
{
	char i,j,a=65,b;
	for(i=1;i<=5;i++)
	{
		
	    	b=a;                    
		for(j=1;j<=i;j++)
		{
			printf("%c",b);
			b--;                
		}
		a++;
		printf("\n");
   	}
}
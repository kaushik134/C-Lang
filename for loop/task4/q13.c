#include<stdio.h>
int main ()
{
	int i,j,a;
	for(i=5;i>=1;i--)
	{
		
	    	a=i;                    
		for(j=5;j>=i;j--)
		{
			printf("%d",a);     
	       		a++;                
		}
		printf("\n");
   	}
}
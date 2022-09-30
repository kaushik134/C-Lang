#include<stdio.h>
int main ()
{
	int i=5,a;
	while(i>=1)
	{
		a=i;
		int j=5;
		while(j>=i)
		{
			printf("%d",a);     
	       	a++;  
			j--;
		}
		i--;
		printf("\n");
   	}
}
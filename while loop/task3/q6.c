#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		int j=1;
		while(j<=10)
		{
			printf("\t%d",i);
			j+=2;
		}
		i+=2;
		printf("\n");
	}	
}
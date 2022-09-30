#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		int j=1;
		do
		{
			printf("\t%d",i);
			j+=2;
		}while(j<=10);
		i+=2;
		printf("\n");
	}while(i<=10);	
}
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		int j=1;
		do
		{
			printf("%d ",j);
			j++;
		}while(j<=5);
		i++;
		printf("\n");
	}while(i<=5);
}
#include<stdio.h>
int main()
{
	int i=1,sp=0;
	do
	{
		int j=1;
		do
		{
			sp++;
			j++;
			printf("%d ",sp);
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
}
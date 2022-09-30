#include<stdio.h>
int main()
{
	int i,j,sp;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			sp++;
			printf("%d ",sp);
		}
		printf("\n");
	}
}
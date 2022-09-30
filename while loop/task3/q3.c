#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
		}
		i++;
		printf("\n");
	}
}
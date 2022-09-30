#include<stdio.h>
int main()
{
	int i=1,sp=0;
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			sp++;
			j++;
			printf("%d ",sp);
		}
		i++;
		printf("\n");
	}
}
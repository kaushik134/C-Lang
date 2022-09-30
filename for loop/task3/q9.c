#include<stdio.h>
int main()
{
	int i,j,a=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("\t %d",a);
			a++;
		}
		a+=5;
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	char i,j,a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("\t %c",a);
			a++;
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	int i,j,a=1,b=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("\t %d",a);
			a++;
		}
		b-=10;
		printf("\n",b);
	}
}
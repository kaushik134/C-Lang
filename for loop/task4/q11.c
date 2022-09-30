#include<stdio.h>
int main()
{
	char i,j,a,n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			n=n+1;
			if(j%2==0)
			{
				a=n+32;
				printf("%c ",n);
			}
			else
			{
				a=n+32;
				printf("%c ",a);			
			}
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	char i=1,j,a,n=64;
	while(i<=5)
	{
		char j=1;
		while(j<=i)
		{
			n=n+1;
			if(i%2==0)
			{
				a=n+32;
				printf("%c ",a);
			}
			else
			{
				printf("%c ",n);			
			}
			j++;
		}
		i++;
		printf("\n");
	}
}
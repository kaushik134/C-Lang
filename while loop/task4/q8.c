#include<stdio.h>
int main()
{
	char i=1,a,n=64;
	while(i<=5)
	{
		char j=1;
		while(j<=i)
		{
			n=n+1;
			if(j%2==0)
			{
				printf("%c ",n);
			}
			else
			{
				a=n+32;
				printf("%c ",a);			
			}
			j++;
		}
		i++;
		printf("\n");
	}
}
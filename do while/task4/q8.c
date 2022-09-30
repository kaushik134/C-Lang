#include<stdio.h>
int main()
{
	char i=1,a,n=64;
	do
	{
		char j=1;
		do
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
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
}
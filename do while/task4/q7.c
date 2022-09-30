#include<stdio.h>
int main()
{
	char i=1,j,a,n=64;
	do
	{
		char j=1;
		do
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
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
}
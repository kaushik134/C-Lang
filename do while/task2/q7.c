#include<stdio.h>
int main()
{
	float i=-0.5,n=1;
	do
	{
		n=n+i;
		printf("\n %0.1f",n);
		i++;
	}while(i<=10);
}




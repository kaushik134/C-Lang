#include<stdio.h>
int main()
{
	int i=1,a=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("\t %d",a);
			a++;
			j++;
		}
		i++;
		a+=5;
		printf("\n");
	}
}
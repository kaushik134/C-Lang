#include<stdio.h>
int main()
{
	char i=1,a=65;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("\t %c",a);
			a++;
			j++;
		}
		i++;
		printf("\n");
	}
}
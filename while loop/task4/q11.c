#include<stdio.h>
int main()
{
	int i=1,k=1;
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(k%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}	
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
}
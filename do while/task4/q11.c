#include<stdio.h>
int main()
{
	int i=1,k=1;
	do
	{
		int j=1;
		do
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
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
}
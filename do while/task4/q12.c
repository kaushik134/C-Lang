#include<stdio.h>
int main()
{
	char i=1,a=65,b;
	do
	{
		b=a;
		char j=1;
		do
		{
			printf("%c",b);
			b--;  
			j++;
		}while(j<=i);
		a++;
		i++;
		printf("\n");
   	}while(i<=5);
}
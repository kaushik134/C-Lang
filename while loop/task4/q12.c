#include<stdio.h>
int main()
{
	char i=1,a=65,b;
	while(i<=5)
	{
		b=a;
		char j=1;
		while(j<=i)
		{
			printf("%c",b);
			b--;  
			j++;
		}
		a++;
		i++;
		printf("\n");
   	}
}
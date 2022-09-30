#include<stdio.h>
int main ()
{
	int  n=5,i,j,x;
	for (i=1;i<=n;i++)
	{
		x=i;
		for(j=1;j<=n;j++)
		{
			printf("%2d",x);
			x+=n;
		}
		printf("\n");
	}	
}
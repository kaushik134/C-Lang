#include<stdio.h>
int main()
{
	int i=1,j=1,k=2,a=0,b=0,c=0;
	do
	{
		a=a+i;
		printf("\n %d ",i);
		i++;
	}while(i<=10);
	printf(" \n Total: %d",a);


	printf("\n EVEN:-");
	do
	{
		b=b+j;
		printf("\n %d ",j);
		j+=2;
	}while(j<=10);
	printf(" \n Total: %d",b);



	printf("\n ODD:-");
	do
	{
		c=c+k;
		printf("\n %d",k);
		k+=2;
	}while(k<=10);
	printf("\n Total : %d",c);


}


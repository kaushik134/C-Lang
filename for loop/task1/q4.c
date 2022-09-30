#include<stdio.h>
int main()
{
	int i,j,k,a=0,b=0,c=0;
	for(i=1;i<=10;i++)
	{
		a=a+i;
		printf("\n %d ",i);
	}
	printf(" \n Total: %d",a);


	printf("\n EVEN:-");
	for(j=1;j<=10;j+=2)
	{
		b=b+j;
		printf("\n %d ",j);
	}
	printf(" \n Total: %d",b);



	printf("\n ODD:-");
	for(k=2;k<=10;k+=2)
	{
		c=c+k;
		printf("\n %d",k);
	}
	printf("\n Total : %d",c);


}


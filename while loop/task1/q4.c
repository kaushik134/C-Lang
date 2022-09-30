#include<stdio.h>
int main()
{
	int i=1,j=1,k=2,a=0,b=0,c=0;
	while(i<=10)
	{
		a=a+i;
		printf("\n %d ",i);
		i++;
	}
	printf(" \n Total: %d",a);


	printf("\n EVEN:-");
	while(j<=10)
	{
		b=b+j;
		printf("\n %d ",j);
		j+=2;
	}
	printf(" \n Total: %d",b);



	printf("\n ODD:-");
	while(k<=10)
	{
		c=c+k;
		printf("\n %d",k);
		k+=2;
	}
	printf("\n Total : %d",c);


}


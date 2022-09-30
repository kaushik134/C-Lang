#include<stdio.h>
int main()
{
	int i,a[5],o=0,e=0,odd=o,even=0;
	printf("\n Enter A:");
	for(i=0;i<5;i++)
	{
		printf("\n Enter A[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]: %d",i,a[i]);
	}

	/* ODD POSITION */
	for(i=1;i<5;i+=2)
	{
		o=o+i;
	}
	
	/* EVEN POSITION */
	for(i=0;i<5;i+=2)
	{
		e=e+i;
	}

	/*odd Array Number*/
	for(i=1;i<5;i+=2)
	{
		odd=odd+a[i];
	}
	
	/*Even Array Number*/
	for(i=0;i<5;i+=2)
	{
		even=even+a[i];
	}
	printf(" \n Odd position Total: %d",o);
	printf(" \n Even position Total: %d",e);
	printf(" \n\n Odd Number Total: %d",odd);
	printf(" \n Even Number Total: %d",even);
	printf("\n\n Total Number: %d",odd+even);
}
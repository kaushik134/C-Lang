#include <stdio.h>
int main()
{
    char i=65;
    do
    {
        printf("%c\n%c\n",i,i+34);
	i+=4;
    }while(i<=90);
}
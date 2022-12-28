#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("kausik.txt","w+");
    fprintf(fp,"kaushik vaghasiya \n");
    fputs("skillqode \n",fp);
    fclose(fp);
}
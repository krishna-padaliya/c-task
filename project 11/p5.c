#include<stdio.h>
void main()
{
	int i,n,fact=0;

    printf("Enter Number:");
    scanf("%d",&n);

    for (int i=0; i<=n; i++)
    {
        fact=fact+i;
    }
    printf("Factorial Number is:%d\n",fact);
}
#include<stdio.h>
void main()
{
	int i,n,fact=1;

    printf("Enter Number:");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial Number is:%d\n",fact);
}
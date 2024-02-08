#include<stdio.h>
void main()
{
	int i,n,sum=0;

    printf("Enter Number:");
    scanf("%d",&n);

    for (int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of Number is:%d\n",sum);
}
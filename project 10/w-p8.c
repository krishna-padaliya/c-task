#include<stdio.h>
void main()
{
	int  i=1,sum=0, n;

	printf("Enter The Number:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of Number %d is:%d",n,sum);
}



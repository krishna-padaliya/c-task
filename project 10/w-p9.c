#include<stdio.h>
void main()
{
	int  i=1,sum=1, n;

	printf("Enter The Number:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum*i;
		i++;
	}
	printf("Factorial %d is:%d",n,sum);
}



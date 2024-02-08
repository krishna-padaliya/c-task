#include <stdio.h>
void main()
{
	int a[500];

	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Your Number:");
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
	   printf("Your Value is=%d\n",a[i]);
	}

	
}
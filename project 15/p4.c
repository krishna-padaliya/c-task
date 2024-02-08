#include <stdio.h>
void main()
{
	int a[5],b[5];
	int sum[10];

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
	   printf("The value for a is=%d\n",a[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",&b[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
	   printf("The value for a is=%d\n",b[i]);
	}

   for (int i = 0; i <5; ++i)
    {
    	printf("The value of a + b is=%d\n",a[i]+b[i]);
    }
}
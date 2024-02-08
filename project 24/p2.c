#include<stdio.h>
void main()
{
	int a[5],*p;
	p=&a[5];

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d\n",&a[i]);
	}

     printf("\n\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("Your Value a[%d] is:%d\n",i,a[i]);
	}

     printf("\n\n");

     for (int i = 4; i>=0; --i)
	{
		printf("Your Value a[%d] is:%d\n",i,a[i]);
	}

	 printf("\n\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("Your Value a[%d] is:%d\n",i,&a[i]);
	}
    
    printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("the address is %d\n",p-(i+1));
	}
}
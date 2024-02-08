#include<stdio.h>
void main()
{
	int a,b,max;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	max=a>b ? a:b;
	printf("Max value is:%d",max);

}
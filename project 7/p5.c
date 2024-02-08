#include<stdio.h>
void main()
{
	int a,b,c,max;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	max=a>b ? a:b && a>b ? a:b && a>c ? a:c;
	printf("Max value is:%d",max);

}
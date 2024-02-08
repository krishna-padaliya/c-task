#include<stdio.h>
void main()
{
	int a,b,min;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	min=a<b ? a:b;
	printf("Min value is:%d",min);

}
// minn
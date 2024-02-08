#include<stdio.h>
void main()
{
	int a,b,c,min;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	min=a<b ? a:b &&  b<c ? b:c && a<c ? a:c;
	printf("Min value is:%d",min);

}
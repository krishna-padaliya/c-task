#include<stdio.h>
void main()
{
	int a,b,c,d,max;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	printf("Enter Value of D:");
	scanf("%d",&d);

	max= a>b ? a:b && a>c ? a:c && a>d ? a:d;
	printf("Max value is:%d",max);

}
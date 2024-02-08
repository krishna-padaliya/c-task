#include<stdio.h>
void main()
{
	int a,b,c,d,e,max;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	printf("Enter Value of D:");
	scanf("%d",&d);

	printf("Enter Value of E:");
	scanf("%d",&e);

	max= a>b ? a:b && a>c ? a:c && a>d ? a:d && a>e ? a:e ;
	printf("Max value is:%d",max);

}
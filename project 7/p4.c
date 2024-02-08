#include<stdio.h>
void main()
{
	int a,b,c,d,min;

	printf("Enter Value of A:");
	scanf("%d",&a);

	printf("Enter Value of B:");
	scanf("%d",&b);

	printf("Enter Value of C:");
	scanf("%d",&c);

	printf("Enter Value of D:");
	scanf("%d",&d);

	min=a<b ? a:b &&  a<c ? a:c && a<d ? a:d && b<c ? b:c && b<d ? b:d && c<d ? c:d ;
	printf("Min value is:%d",min);

}
// minn
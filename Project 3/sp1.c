// 2  value swipe

#include<stdio.h>
void main()
{
	int a,b,c;

	printf("Enter your a value:",a);
	scanf("%d",&a);

	printf("Enter your b value:",b);
	scanf("%d",&b);

     c=a;
     a=b;
     b=c;

	printf("Your swipe  value a is:%d\n",a);
	printf("Your swipe value  b is:%d\n",b);
}
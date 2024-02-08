#include<stdio.h>
void div();
void main()
{
	div();
}
void div()
{
     int num;

	printf("Enter the number:");
	scanf("%d",&num);

	if(num%3==0 && num%5==0)
	{
		printf("Number is divisible 3 or 5!!!");
	}
	else
	{
		printf("Number is not divisible 3 or 5!!!");
	}
}

#include<stdio.h>
void main()
{
	int sum=0 ,i=0, num;

	printf("Enter The Number:");
	scanf("%d", &num);

	do{
		sum=sum+i;
		i++;
	}while(i<=num);

	printf("Sum of Number %d is:%d",num,sum);
}
// (ex 5=5*4*3*2*1=120)

#include<stdio.h>
void main()
{
	int num , fact=1 , i=1;
	
	printf("Enter The value:");
	scanf("%d",&num);

	do{
		fact= fact * i;
		i++;
	}while(i<=num);

	printf("Factorial of %d = %d",num,fact);


}
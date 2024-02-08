#include<stdio.h>
void cube();
void main()
{
	cube();
}
void cube()
{
	int number,cube;

	printf("Enter the number:");
	scanf("%d",&number);

	cube=number*number*number;

	printf("Cube is=%d",cube);
}
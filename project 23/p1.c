#include<stdio.h>
void sw(int *x);
void main()
{
	int a;

	printf("Value is A=");
	scanf("%d",&a);
   
   sw(&a);

}

void sw(int *x)
{
	int z;

	z=(*x)*(*x);

	printf("Value is A=%d\n",z);
}
#include<stdio.h>
void sw(int *x,int *y);
void main()
{
	int a=11,b=22;

	printf("Value is A=%d\n",a);
	printf("Value is B=%d\n",b);
   
   sw(&a,&b);

}

void sw(int *x,int *y)
{
	int z;

	z=*x;
	*x=*y;
	*y=z;

	printf("Value is A=%d\n",*x);
	printf("Value is B=%d\n",*y);
}
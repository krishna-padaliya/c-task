#include <stdio.h>
void main()
{
	int x,y,z,A;

	printf("Enter value for x =");
	scanf("%d",&x);

	printf("Enter value for y =");
	scanf("%d",&y);

	printf("Enter value for z =");
	scanf("%d",&z);

	A=x*x*x-3*x*x*y-3*x*x*z+3*x*y*y+6*x*y*z+ 3*x*z*z-y*y*y- 3*y*y*z- 3*y*z*z-z*z*z;

	printf("value for A =%d",A);
}
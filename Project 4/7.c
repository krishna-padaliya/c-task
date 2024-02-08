#include <stdio.h>
void main()
{
	int x,y,z,A;

	printf("Enter Value for x=");
	scanf("%d",&x);

	printf("Enter Value for y=");
	scanf("%d",&y);

	printf("Enter Value for z=");
	scanf("%d",&z);

	A=x*x+2*x*y+2*x*z+y*y+2*y*z+z*z;

	printf("Value for A=%d",A);

}
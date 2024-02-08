#include <stdio.h>
void main()
{
	int x,y,z;

	printf("Enter value for x =");
	scanf("%d",&x);

	printf("Enter value for y =");
	scanf("%d",&y);

	z=(x-y)*(x-y)*(x-y);


	printf("Value for z =%d ",z);
}
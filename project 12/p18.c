#include<stdio.h>
void main()
{
      int i, j;

	for (int i=0; i<=5; i++)
	{
		for (int j=0; j<=i; j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}

#include <stdio.h>
void main()
{
	for (int i=1; i<=4; i++)
	{
		for (int j=1; j<=5; j++)
		{
			if (i==2 && j<4 || i==2 && j==5 || i==3 && j<2 || i==3 && j>2)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
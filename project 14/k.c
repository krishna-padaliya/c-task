#include <stdio.h>
void main()
{
	for (int i=1; i<=5; i++)
	{
		for (int j=1; j<=5; j++)
		{
			if (i==1 && j==2 || i==1 && j==3 || i==1 && j==5 || i==2 && j==2 || i==2 && j>3 || i==3 && j>2 || i==4 && j==2 || i==4 && j>3 || i==5 && (j>1 && j<4) || i==5 && j==5)
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
#include <stdio.h>
void main()
{
	for (int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==2 && j>1 || i==4 && (j>1 && j<5) || i==3 && (j>1 && j<4))
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
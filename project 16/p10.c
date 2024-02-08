/*WAP to print & find sum of all boundary elements of 5X5 array..*/

#include<stdio.h>

void main()
{
	 
	int i, j,sum = 0;;
	int mat[5][5];
	printf("\nInput the matrix elements:");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
			scanf("%d",&mat[i][j]);
	}

	printf("\nBoundary Matrix\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
			{
				if (i == 0 || j == 0 || i == 3 || j == 3)
					{
						printf("%d", mat[i][j]);
						sum = sum + mat[i][j];
					}
			else
				printf(" ");
			}
		printf("\n");
	}
	printf("\nSum of boundary is %d", sum);
}

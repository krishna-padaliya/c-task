#include<stdio.h>
void main()
{
	for(int i=1; i<=5; i++)
	{
		for(int k=5-1; k>=i; k--)
		{
             printf(" ");
		}
		for(int j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(int i=2; i<=5; i++)
	{
		for(int k=3-1; k<=i; k++)
		{
             printf(" ");
		}
		for(int j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");

		
	}
}
#include<stdio.h>
void main()
{

	for (int i=1; i<=5; i++)
	{
		for (int j=5-1; j>=i; j--)
		{
			 printf(" ");
		}
	    for (int k=1; k<=i; k++)
	    {
	    	printf("%d",k%2);
	    }
	     printf("\n");
	}
}
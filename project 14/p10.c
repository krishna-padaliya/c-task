#include<stdio.h>
void main()
{

	for (int i=5; i>=1; i--)
	{
		for (int j=5-1; j>=i; j--)
		{
			 printf(" ");
		}
	    for (int k=i; k>=1; k--)
	    {
	    	printf("%d",k);
	    }
	     printf("\n");
	}
}
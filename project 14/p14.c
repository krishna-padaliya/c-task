#include<stdio.h>
void main()
{

	for (int i=0; i<=5; i++)
	{
		for (int j=5-1; j>=i; j--)
		{
			 printf(" ");
		}
	    for (int k=0; k<=i; k++)
	    {
	    	printf("%c",k+65);
	    }
	     printf("\n");
	}
}
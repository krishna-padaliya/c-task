#include<stdio.h>
void main()
{

	for (int i=0; i<=4; i++)
	{
		for (int j=0; j<=5-i; j++)
		{
			 printf(" ");
		}
	    for (int k=i; k>=0; k--)
	    {
	    	printf("%c",k+65);
	    }
	     printf("\n");
	}
}
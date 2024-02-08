#include<stdio.h>
void main()
{
	int k=0;

	for (int i=0; i<=4; ++i)
	{
	    for (int j=0; j<=i; j++)
	    {
	    	printf("%c", k+65);
	    	k++;
	    }
	     printf("\n");
	}
}
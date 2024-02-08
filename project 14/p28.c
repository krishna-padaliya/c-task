#include<stdio.h>
void main()
{
	int i,j,sp,k;
	for (int i=1; i<=5; ++i)
	{
	     for(j=1; j<=i; j++)
	     {
	     	printf("%d",j);
	     }
	     for(sp=5-1; sp>=i; sp--)
	     {
	     	printf("  ");
	     }
	     for(k=i; k>=1; k--)
	     {
	     	printf("%d",k);
	     }
	     printf("\n");
	}
}
	
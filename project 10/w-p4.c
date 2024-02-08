#include<stdio.h>
void main()
{
	int i;

	printf("Enter Natural  Number:");
	scanf("%d",&i);

	while(i>0)
	{
		printf("%d\n",i );
        i--;
	}
}
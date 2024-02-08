#include<stdio.h>
void main()
{
	int num=1 , n;

	printf("Enter Natural  Number:");
	scanf("%d",&n);

    do{
    	printf("%d\n",num);
    	num++;
    }while(num<=n);

}
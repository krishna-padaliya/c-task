// (f=(9.5*c)+32)
#include<stdio.h>
void main()
{
    int c,f;

	printf("Enter Value of Celsius:\n");
	scanf("%d",&c);

    // f=(9.5*c)+32;
    f=(c*9/5)+32;

     printf("Value of Fahrenheit is:%d",f);

}
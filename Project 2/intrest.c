#include <stdio.h>
void main()
{
	float p,r,n,Intrest;

	printf("Enter value of Price =");
	scanf("%f",&p);

	printf("Enter value of Ratio =");
	scanf("%f",&r);

	printf("Enter value of Years =");
	scanf("%f",&n);

	Intrest=p*r*n/100;

	printf("Value of Intrest = %.2f",Intrest);

}
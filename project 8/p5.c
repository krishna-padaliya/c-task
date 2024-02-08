#include<stdio.h>
void main()
{
	float unit,total,charge;

	printf("Enter electricity unit:");
	scanf("%f", &unit);

    if(unit<=50)
    {
    	total=unit*0.50;
    }
    else if(unit<=100) 
    {
    	total=unit*0.75;
    }
     else if(unit<=150) 
    {
    	total=unit*1.20;
    }
    else
    {
        total=unit*1.50;
    }

    charge=total+0.2;
    printf("Total Electricity Bill: Rs. %.2f\n", charge);
}

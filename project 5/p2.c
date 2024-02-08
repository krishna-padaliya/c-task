#include<stdio.h>
void main()
{
	  int num;

	  printf("Enter Your Number:");
	  scanf("%d", &num);

	  if (num>0.0)
        printf("You Entered a Positive Number.");
      else if (num<0.0)
        printf("You Entered a Negative Number.");
      else
        printf("You entered Zero.");
}
/*8.WAP to perform anti-diagonal sum of 2D array.*/

#include<stdio.h>
 
void main()
{
 	int i, j,a[10][10], Sum = 0;
  
 
 	printf(" Please Enter the Matrix Elements \n");
 	for(i = 0; i < 3; i++)
  	{
   		for(j = 0;j < 3;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}

        printf("The matrix\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
     printf("%d\t",a[i][j]);
   }
   printf("\n");
 }

 	for(i = 0; i < 3; i++)
  	{
   		Sum = Sum + a[i][2-i];
  	}
 
 	printf("\n The Sum of anti Diagonal Elements of a Matrix =  %d", Sum );

}
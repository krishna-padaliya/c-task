#include<stdio.h>
void main()
{

   int i, j, matrix[10][10],  sum = 0;

    for (i = 0; i < 2; i++) 
   {
      for (j = 0; j < 2; j++) 
      {
         printf("\nEnter the Element  : ");
         scanf("%d", &matrix[i][j]);
      }
   }
 
  for (i = 0; i < 2; i++) 
  {
   for (j = 0; j < 2; j++) 
    {
     if (i == j)
     sum = sum + matrix[i][j];
    }
   }
 
   printf("\nSum of Diagonal Elements in Matrix is: %d", sum);
}
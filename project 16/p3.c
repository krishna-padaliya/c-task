/*3.WAP to find average of 2D array.*/

#include<stdio.h>


int main()
{
 int i,j;
 float a[10][10], sum=0.0, avg;

 printf("Enter matrix elements:\n");
 for(i=0;i< 4;i++)
 {
  for(j=0;j< 4;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f", &a[i][j]);
  }
 }

 for(i=0;i< 4;i++)
 {
  for(j=0;j< 4;j++)
  {
   sum = sum + a[i][j];
  }
 }

 avg = sum/(4*4);
 printf("Sum = %f\n", sum);
 printf("Average = %f", avg);

}

/*9.WAP to perform cross-diagonal sum of 2D array.*/
#include<stdio.h>

void main()
{
 int i,j,a[10][10], sum=0;

 printf("Enter matrix elements:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("a[%d][%d]=",i,j);
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
   

    for(i=0;i< 3;i++)
   {
      for(j=0;j< 3;j++)
      {


   if(i==j || i+j==2)
   {
    sum = sum + a[i][j];
   }
  }
}
 
 printf("Sum = %d\n", sum);

}

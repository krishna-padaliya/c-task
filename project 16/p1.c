/*1.WAP to get & print 2D array of N elements.*/

#include<stdio.h>
void main(){
   /* 2D array declaration*/
   int a[6][6], i, j,m;

   printf("enter the value of:");
 
   scanf("%d", &m);

   for(i=0; i<m; i++) 
   {
      for(j=0;j<m;j++)
       {
         printf("Enter value for array :");
         scanf("%d", &a[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<m; i++) {
      for(j=0;j<m;j++) {
         printf("%d ", a[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
}
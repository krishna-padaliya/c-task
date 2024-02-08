/*WAP to perform coulmn-wise sum of 2D array.*/

#include <stdio.h>
    void main ()
    {
 
        int a[10][10], i, j, sum = 0;
 
 
        printf("Enter the co-efficients of the matrix A:");
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 4; ++j) 
            {
                scanf("%d", &a[i][j]);
            }
        }
			printf("The given matrix is \t");
      
        for (j = 0; j < 4; ++j) 
        {
            for (i = 0; i < 4; ++i)
            {
                sum =  sum+a[i][j];
            }
 
            printf("\nSum of the %d column is = %d\n", j, sum);
            sum=0 ;
 
        }
 
    }
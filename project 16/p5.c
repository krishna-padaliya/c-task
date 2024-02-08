/*6.WAP to perform row-wise sum of 2D array.*/

#include <stdio.h>
    void main ()
    {
 
        int a[10][10] , i, j, sum = 0;
 
 
        printf("Enter the co-efficients of the matrix A :\n");
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 4; ++j) 
            {
                scanf("%d", &a[i][j]);
            }
        }
 
        for (i = 0; i < 4; ++i) 
        {
            for (j = 0; j < 4; ++j) 
            {
                sum = sum + a[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
    }
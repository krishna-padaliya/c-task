/*WAP to perform diagonal sum of 2D array.*/

    #include <stdio.h>
    void main ()
    {
  
         int array[10][10], i, j, a = 0, sum = 0;
 
 
        {
 
            printf("Enter the co-efficients of the 4*4 matrix\n");
            for (i = 0; i < 4; ++i)
            {
                for (j = 0; j < 4; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < 4; ++i) 
            {
                for (j = 0; j < 4; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < 4; ++i) 
            {
                sum = sum + array[i][i];
            }
 
            printf("\nThe sum of the main 4*4 diagonal elements is = %d\n", sum);
 
        }
 
 
    }

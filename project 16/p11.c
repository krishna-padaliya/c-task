#include<stdio.h>
void main()
{
    int mat[5][5], i, j, sum;
    sum = 0;
    printf("Enter elements:\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("\nSum of elements = %d", sum);
}
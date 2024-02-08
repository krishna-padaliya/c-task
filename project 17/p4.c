#include <stdio.h>
void main() 
{
  int a[10][10], transpose[10][10],i,j;

  printf("\nEnter matrix elements:\n");
  for ( i = 0; i < 2; i++)
  for ( j = 0; j < 3; j++) {
    printf("Enter element : ");
    scanf("%d", &a[i][j]);
  }

  printf("Entered matrix: \n");
  for ( i = 0; i < 2; i++)
  for ( j = 0; j < 3; j++) {
    printf("%d  ", a[i][j]);
    if (j == 3 - 1)
    printf("\n");
  }

  for ( i = 0; i < 2; i++)
  for ( j = 0; j < 3; j++) {
    transpose[j][i] = a[i][j];
  }

  printf("Transpose of the matrix:\n");
  for ( i = 0; i < 3; i++)
  for ( j = 0; j < 2; j++) {
    printf("%d  ", transpose[i][j]);
    if (j == 2 - 1)
    printf("\n");
  }
}
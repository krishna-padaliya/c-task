/*WAP to find length of 2D array.*/

#include <stdio.h>

void main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int length = rows * cols;
    printf("The length of the 2D array is: %d\n", length);

}
#include <stdio.h>
void main()
{
    int arr[10]; 
    int i;

    printf("Enter elements in array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<5; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

}
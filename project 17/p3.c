#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i;

    printf("Enter  elements of array A\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter  elements of array B\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf(" addition of two matrices \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",c[i]);
    }
}
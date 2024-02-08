#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a[1000],sum=0;

    printf("Enter elements in array :");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0; i<5; i++)
    {
         sum=sum+a[i];
    }
     printf("sum of array is :%d",sum);
}
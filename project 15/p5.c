#include<stdio.h>
void main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={60,70,80,90,100};

    for (int i = 0; i < 5; ++i)
    {
         printf("%d\t",a[i]);
    }
     for (int i = 0; i < 5; ++i)
    {
         printf("%d\t",b[i]);
    }
}
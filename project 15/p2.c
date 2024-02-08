#include<stdio.h>
void main()
{
    int length;

    int arr[]={1,2,3,4,5,6};

    length=sizeof(arr)/sizeof(arr[0]);

    printf("Number of elements is:%d",length);
}
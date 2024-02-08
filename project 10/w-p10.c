#include<stdio.h>
void main()
{
    int num , tbl=1;

    printf("Enter a Number:");
    scanf("%d" , &num);

    while(tbl<=10){
        printf("%d * %d = %d\n", num , tbl , tbl*num);
        tbl++;
    }
}
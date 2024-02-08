#include<stdio.h>
void main()
{
    int num , tbl=1;

    printf("Enter a Number:");
    scanf("%d" , &num);

    do{
        printf("%d * %d = %d\n", num , tbl , tbl*num);
        tbl++;
    }while(tbl<=10);
}
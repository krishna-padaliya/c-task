#include <stdio.h>

void main()
{
    char alp='a';

    printf("Alphabets from a - z: \n");
    
    do{
        printf("%c\n",alp);
        alp++;
    }while(alp<='z');
}
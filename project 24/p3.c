#include <stdio.h>
void main() 
{
    char str[100], * ptr;
    int len=0;
    ptr=str;

    printf("Enter the string: ");
    gets(str);
   
    while ( *ptr != '\0') 
    {
        len++;
        ptr++;
    }

    printf("The length of the string is: %d", len);
}
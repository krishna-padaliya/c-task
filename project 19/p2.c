#include <stdio.h>
#include <string.h>
void main()
{
    char s[10];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n;i++)  
    {
        if(s[i]==s[n-i-1])
        c++;

    }
    if(c==i)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
    
}
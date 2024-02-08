/*3.WAP to convert given string in lowercase.*/


#include <stdio.h>
#include <string.h>

 
void main()
{
    char s[1000];  
  
    printf("Enter  the string: ");
    gets(s);
    
        
    strlwr(s);         

    printf("string in lowercase ='%s'\n",s);
    
    
}
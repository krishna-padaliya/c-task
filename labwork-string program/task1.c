/*1.WAP to convert given character in lowercase.*/

#include <stdio.h>
#include <string.h>

 
void main()
{
    char s[];  
  
    printf("Enter  the character: ");
    gets(s);
    
        
    strlwr(s);         

    printf("character in lowercase ='%s'\n",s);
    
    
}
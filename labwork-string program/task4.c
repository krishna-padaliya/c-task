/*3.WAP to convert given string in uppercase.*/


#include <stdio.h>
#include <string.h>

 
void main()
{
    char s[1000];  
  
    printf("Enter  the string: ");
    gets(s);
    
        
    strupr(s);         

    printf("string in uppercase ='%s'\n",s);
    
    
}
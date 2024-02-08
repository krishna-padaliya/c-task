/*2.WAP to convert given character in uppercase.*/


#include <stdio.h>
#include <string.h>

 
void main()
{
    char s[1000];  
  
    printf("Enter  the charcter: ");
    gets(s);
    
        
    strupr(s);         

    printf("charcter in uppercase ='%s'\n",s);
    
    
}
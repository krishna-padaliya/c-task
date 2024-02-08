/*6.WAP to convert given string in togglecase.*/
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[1000];  
    int i,t;
 
    printf("Enter  the string : ");
    gets(s);
    t=s[i];
 
     
    for(i=0;i<t;i++)  
    {
        if(s[i]>=65 && s[i]<=90)  //lowercase
         s[i]+=32;
        else if(s[i]>=97 && s[i]<=122) // uppercase
         s[i]-=32;
    }
    
     
    printf("string in togglecase ='%s'\n",s);


}
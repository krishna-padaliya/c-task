#include<stdio.h> 
void main() 
 { 
        int a,b,c,d; 
        printf("Enter Number A:"); 
        scanf("%d",&a); 
        printf("Enter Number B:"); 
        scanf("%d",&b); 
        printf("Enter Number C:"); 
        scanf("%d",&c); 
        printf("Enter Number D:"); 
        scanf("%d",&d); 
        if(a>b) 
         { 
              if(a>c) 
               { 
                  if(a>d) 
                   {   
                      printf("%d is big",a); 
                    } 
                  else 
                   { 
                      printf("%d is big",d); 
                    } 
                } 
           } 
               else if(b>c) 
                       { 
                            if(b>d) 
                              { 
                                  printf("%d is big",b); 
                               } 
                             else 
                              { 
                                  printf("%d is big",d); 
                              } 
                        } 
                else if(c>d) 
                       { 
                              printf("%d is big",c); 
                        } 
               else 
                { 
                     printf("%d is big",d); 
                } 
                     
 } 
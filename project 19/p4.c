#include <stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int i,j,n;
    gets(str);

    n = strlen(str);

    for(i=0; i<n; i++)
    {

        for(j=i+1; j<n;j++)
        {
             if(str[i] == str[j])
             {
                 str[j] = str[j+1];
             }

        }
    }

    puts(str);

}
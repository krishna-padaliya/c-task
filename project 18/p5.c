#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() 
{
    char string[100];
    printf("Enter a string: ");
    gets(string);
    string[strcspn(string, "\n")] = '\0';

    for (int i = 0; i < strlen(string); i++) {
        if (i == 0 || isspace(string[i - 1])) {
            string[i] = toupper(string[i]);
        }
    }

    printf("%s\n", string);
}
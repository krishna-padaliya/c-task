#include<stdio.h>
#include<string.h>
void str();
int main()
{
	str();
}
void str()
{
	char count[100];
	int length;

	printf("Enter your string:");
	gets(count);

    length=strlen(count);
    printf("your string length is:%d",length);
}
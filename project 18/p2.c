#include<stdio.h>
#include<ctype.h>
void main()
{
	char ans,result;

	printf("Enter Your Character:");

	ans=getchar();

	result=toupper(ans);

	printf("%c",result);
}
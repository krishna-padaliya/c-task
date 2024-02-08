#include<stdio.h>
void main()
{
	FILE *fp;
	char msg[50];

	fp=fopen("hello.txt","a");

	printf("Enter String=");
	gets(msg);

	if (fp==NULL)
	{
		printf("File is not found");
	}
	else
	{
		printf("File is create");
	}

	fputs(msg,fp);
}
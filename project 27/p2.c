#include<stdio.h>
void main()
{
	FILE *fp;
	char msg[50];

	fp=fopen("hello.txt","r");

	if (fp==NULL)
	{
		printf("File is not found");
	}
	else
	{
		printf("File is create");
	}

	fgets(msg,50,fp);
	printf("%s",msg);
}
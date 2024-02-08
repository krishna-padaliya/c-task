#include<stdio.h>
void main()
{
	FILE *fp,*sw;
	char msg[50];

	fp=fopen("hello1.txt","w");
	sw=fopen("hello.txt","r");

	// printf("Enter String=");
	// gets(msg);

	if (fp==NULL)
	{
		printf("File is not found");
	}
	else
	{
		printf("File is create");
	}

    fgets(msg,50,sw);
	fputs(msg,fp);
	printf("%s\n",msg);
}
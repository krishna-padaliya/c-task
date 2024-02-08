#include<stdio.h>
#include<string.h>
int main()
{
	char ans[50];

	printf("Enter Your Character:");
    gets(ans);

    strupr(ans);

	printf("%s",ans);
}
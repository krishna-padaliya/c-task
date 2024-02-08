#include<stdio.h>
void main()
{
	char ch;

	printf("Enter any Number/Alphabets/Special Charcater:");
	scanf("%c", &ch);
	

	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
         printf("This is a Alphabet.", ch);
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("This is Number." , ch);
	}
	else{
		printf("This Is Special Charcater." ,ch);
	}

	
}
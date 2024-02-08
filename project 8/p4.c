#include<stdio.h>
void main()
{
	char day;

	printf("Enter Day's first  Charcter:" );
	scanf("%c", &day);

	switch(day)
	{
	    case 'M':
	    case 'm':
	    printf("Monday");
	    break;

	    case 'T':
	    case 't':
        printf("Tuesday\n");
        printf("Thursday");
        break;

        case 'W':
        case 'w':
        printf("Wednesday");
        break;

        case 'F':
        case 'f':
        printf("Friday");
        break;

        case 'S':
        case 's':
        printf("Saturday\n");
        printf("Sunday");
        break;

        default :
        printf("Invalid Input");
        break;
	}

}
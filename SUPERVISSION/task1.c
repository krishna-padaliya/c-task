#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char name[20];
    int age;
    float salary;

    fp = fopen("emp.txt", "w");

    if (fp == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter the name:\n");
    scanf("%s", name);
    fprintf(fp, "Name  = %s\n", name);

    printf("Enter the age:\n");
    scanf("%d", &age);
    fprintf(fp, "Age  = %d\n", age);

    printf("Enter the salary:\n");
    scanf("%f", &salary);
    fprintf(fp, "Salary  = %.2f\n", salary);

    fclose(fp);
}
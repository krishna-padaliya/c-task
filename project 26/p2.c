#include<stdio.h>
struct emp
{
	int emp_id,emp_age,emp_experience;
	char emp_name[50],emp_role[50],emp_city[50],emp_company_name[50];
}s1;
void main()
{
     struct emp s1;

     for (int i = 0; i < 5; ++i)
     {
        printf("Enter Employee id:");
        scanf("%d",&s1.emp_id);

        printf("Enter Employee Name:");
        scanf("%s",&s1.emp_name);

        printf("Enter Employee Age:");
        scanf("%d",&s1.emp_age);

        printf("Enter Employee Role:");
        scanf("%s",&s1.emp_role);

        printf("Enter Employee City:");
        scanf("%s",&s1.emp_city);

        printf("Enter Employee Experience:");
        scanf("%d",&s1.emp_experience);

        printf("Enter Employee Company Name:");
        scanf("%s",&s1.emp_company_name);

        printf("\n\n");

     }
        printf("--------------------------------------------------------------------------------------\n");
        printf("\n\n");
     
         printf("Employee Data");
          printf("\n\n");


        for (int i = 0; i < 5; ++i)
        {
          printf("id-%d\n",s1.emp_id);
           printf("Name-%s\n",s1.emp_name);
           printf("Age-%d\n",s1.emp_age);
           printf("Role-%s\n",s1.emp_role);
           printf("City-%s\n",s1.emp_city);
           printf("Experience-%d\n",s1.emp_experience);
           printf("Company Name-%s\n",s1.emp_company_name);

           printf("\n\n");

        }
}
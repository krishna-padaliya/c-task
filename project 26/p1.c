#include<stdio.h>
struct student
{
	int stu_id,stu_age,stu_std;
	char stu_name[50],stu_course[50],stu_city[50],stu_school[50];
}s1;
void main()
{
     struct student s1;

     for (int i = 0; i < 5; ++i)
     {
        printf("Enter Student id:");
        scanf("%d",&s1.stu_id);

        printf("Enter Student Name:");
        scanf("%s",&s1.stu_name);

        printf("Enter Student Age:");
        scanf("%d",&s1.stu_age);

        printf("Enter Student Course:");
        scanf("%s",&s1.stu_course);

        printf("Enter Student City:");
        scanf("%s",&s1.stu_city);

        printf("Enter Student Std:");
        scanf("%d",&s1.stu_std);

        printf("Enter Student School:");
        scanf("%s",&s1.stu_school);

        printf("\n\n");

     }
        printf("--------------------------------------------------------------------------------------\n");
        printf("\n\n");
     
         printf("Student Data");
          printf("\n\n");


        for (int i = 0; i < 5; ++i)
        {
        	 printf("id-%d\n",s1.stu_id);
           printf("Name-%s\n",s1.stu_name);
           printf("Age-%d\n",s1.stu_age);
           printf("Course-%s\n",s1.stu_course);
           printf("City-%s\n",s1.stu_city);
           printf("Std-%d\n",s1.stu_std);
           printf("School-%s\n",s1.stu_school);

           printf("\n\n");

        }
}
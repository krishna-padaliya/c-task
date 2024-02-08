#include<stdio.h>
struct student
{
	int no;
	char name[50];
	float chem_marks,maths_marks, phy_marks,mark,per;
}s1;
void main()
{
     struct student s1[5];

     for (int i = 0; i < 5; ++i)
     {
        printf("Enter Your Roll-No:");
        scanf("%d",&s1[i].no);

        printf("Enter Your Name:");
        scanf("%s",&s1[i].name);

        printf("Enter Your Chemistry mark:");
        scanf("%2f",&s1[i].chem_marks);
        printf("Enter Your Maths mark:");
        scanf("%2f",&s1[i].maths_marks);
        printf("Enter Your Physiology mark:");
        scanf("%2f",&s1[i].phy_marks);

        printf("\n\n");

     }
        printf("------------------------------------------------------------------\n");
        printf("\n\n");



        for (int i = 0; i < 5; ++i)
        {
        	 printf("Roll-No:%d\n",s1[i].no);

             s1[i].mark=s1[i].chem_marks+s1[i].maths_marks+s1[i].phy_marks;

             printf("Total of All Subject is:%2f\n",s1[i].mark);
        }
         
         printf("\n\n");
         printf("------------------------------------------------------------------\n");
         printf("\n\n");


        for (int i = 0; i < 5; ++i)
        {
        	printf("Roll-No:%d\n",s1[i].no);

             s1[i].per=(s1[i].chem_marks+s1[i].maths_marks+s1[i].phy_marks)/3;

             printf("Percentage is:%2f\n",s1[i].per);
        }


}
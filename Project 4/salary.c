#include<stdio.h>
 int main() 
 {
   int gross_salary, basic, da, hra;
 
   printf("Enter your salary:");
   scanf("%d", &basic);
 
   da = (10 * basic) / 100;
   printf("Your Dearness allowance:%d\n",da);

   hra = (13 * basic) / 100;
   printf("Your House Rent Allowance:%d\n",hra);
 
   gross_salary = basic + da + hra;
   printf("\nGross salary is: %d", gross_salary);
}


// basic salary
// Dearness allowance
// House Rent Allowance

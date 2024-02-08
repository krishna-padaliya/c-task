#include <stdio.h>
void cal();
void main() 
{
   cal();
}
void cal()
{
  char op;
  int f, s;

   printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  printf("Enter two number: ");
  scanf("%d %d", &f, &s);

  switch (op) 
  {
    case '+':
      printf("%d+%d=%d",f,s,f+s);
      break;
    case '-':
      printf("%d-%d=%d",f,s,f-s);
      break;
    case '*':
      printf("%d*%d=%d",f,s,f*s);
      break;
    case '/':
      printf("%d/%d=%d",f,s,f/s);
      break;
    default:
      printf("operator is not correct");
  }
}

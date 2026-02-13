#include<stdio.h>

int main () 
{
  char c;
  float a,b;
  printf("enter a symbol what to do(+,-,*,/): ");
  scanf("%c",&c);

  printf("enter values of a and b: ");
  scanf("%f%f",&a,&b);

  switch (c)
  {
    case '+':
      printf("sum : %f",a+b);
      break;

    case '-':
      printf("substraction : %f",a-b);
      break;

    case '*':
      printf("multipication : %f",a*b);
      break;

    case '/':
      if (b!=0)
        printf("division : %f",a/b);
      else
        printf("division not possible");
      
    default:
      printf("enter valid symbol");
  }
  return 0;
}
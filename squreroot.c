#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if(number<0)
    {
        printf("squre root of negative number is not possible\n");
    }
    else
    {
        result = sqrt(number);
        printf("The square root of %.2lf is %.2lf\n", number, result);
    }
}
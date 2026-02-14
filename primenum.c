#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            break;
        }
    }

    if(i == n && n > 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not prime number");
    }

    return 0;
}
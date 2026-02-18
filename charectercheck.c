#include<stdio.h>

void main()
{
    char ch;

    printf("enter a chrecter: ");
    scanf("%c", &ch);

    if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z')
    {
        printf("chrecter is alphabat");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("chrecter is digit");
    }
    else
    {
        printf("chrecter is special chrecter");
    }
}
#include<stdio.h>
int main()
{
    char c;
    printf("Enter Character");
    scanf("%c",&c);
    int n;
    n=c;
    if(n>=65&&n<=90)
    {
        printf("%c is Capital letter",c);

    }
    else if(n>=97&&n<=122)
    {
        printf("%c is small case letter",c);

    }
    else if(n>=48&&n<=57)
    {
        printf("%c is digit",c);

    }
    else 
    {
        printf("%c is special character",c);
        

    }

}
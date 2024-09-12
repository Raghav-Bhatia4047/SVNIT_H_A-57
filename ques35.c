#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter number :");
    scanf("%d",&a);
    while (a>9)
    {
        sum=0;
        while (a!=0)
        {
            b=a%10;
            sum+=b;
            a=a/10;
        }
        a=sum;
    }
    printf("%d",a);
}
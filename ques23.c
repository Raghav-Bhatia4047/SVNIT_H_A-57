#include<stdio.h>
int main()
{
    int a,b,d;
    printf("Enter number:\n");
    scanf("%d",&a);
    d=a;
    printf("Enter power u want of that number:");
    scanf("%d",&b);
    for (int i=1;i<b;i++)
    {
        a=a*d;
    }
    printf("(%d)^%d=%d",d,b,a);
}
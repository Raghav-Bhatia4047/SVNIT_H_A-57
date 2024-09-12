#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf(" a is max %d",a);
    }
    else if ( b>c)
    {
        printf("b is max %d",b);
    }
    else
    {
        printf("c is max %d",c);
    }

}
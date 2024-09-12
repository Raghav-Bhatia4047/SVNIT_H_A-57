#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    printf("Value of a is %d\n",a);
    b=c;
    printf("Value of b is %d\n",b);
}
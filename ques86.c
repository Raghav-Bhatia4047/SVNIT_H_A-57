#include<stdio.h>
int main()
{
    int a, b,c,d;
    for( a=0;a<=500;a++)
    {
        b=a%10;
        c=(a/10)%10;
        d=a/100;
        if(a==(b*b*b)+(c*c*c)+(d*d*d))
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
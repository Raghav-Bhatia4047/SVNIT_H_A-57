#include<stdio.h>
int main()
{
    int a=0,b=0,i=1;
    while(a>=0)
    {
        printf("Enter number(%d): ",i);
        scanf("%d",&a);
        b=b+a;
        i=i+1;

    }
    printf("\n sum is = %d",b);
    return 0;
}
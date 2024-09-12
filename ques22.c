#include<stdio.h>
void main()
{
    int prod,a,count=1;
    prod=1;
    printf("Enter a\n");
    scanf("%d",&a);

    while(count<=a)
    {
        prod=prod*count;
        count=count+1;

    }
    printf("%d",prod);
    
}
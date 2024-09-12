#include<stdio.h>
void main()
{
    int a,sum=-1;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum=sum+2;

    
    printf("%d,",sum);
    }

}
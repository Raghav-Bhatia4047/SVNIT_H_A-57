#include<stdio.h>
void main()
{
    int a=0,b=1,n,sum;
    printf("Enter number of terms \n");
    scanf("%d",&n);
    printf("%d,",a);
    printf("%d,",b);
    for(int i=3;i<=n;i++)
    {
        sum=a+b;
        printf("%d,",sum);
        a=b;
        b=sum;

    }

    

}
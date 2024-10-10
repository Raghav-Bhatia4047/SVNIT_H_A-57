#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter number of terms");
    scanf("%d",&n);
    fibonacci(n);

    
    return 0;
}
int fibonacci(int n)
{
    int a,b,sum;
    printf("0,1");
    a=0;
    b=1;
    for(int i=2;i<n;i++)
    {
        sum=a+b;
        printf(",%d",sum);
        a=b;
        b=sum;

    }
}
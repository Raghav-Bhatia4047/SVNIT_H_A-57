#include<stdio.h>
#include<stdlib.h>
int factorial(int n);
int main()
{
    int n ,r,result;
    printf("Enter n value\n");
    scanf("%d",&n);
    printf("Enter r value\n");
    scanf("%d",&r);
    if(n<0 || r<0 || n<r)
    {
        printf("ncr value does not exist enter correct n and r");
        exit(0);
        
    }
    result=factorial(n)/(factorial(r)*factorial(n-r));
    printf("ncr is %d",result);

    
    return 0;
}
int factorial(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    return prod;
}
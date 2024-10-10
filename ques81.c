#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n)
{
    int flag=0;
    for(int i=2;i<(n)/2;i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
        else{
            continue;
        }
    }
    if(flag==0)
    printf("1");
    else
    printf("0");

}
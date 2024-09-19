#include<stdio.h>
int main()
{
    int n,max,min,num;
    printf("Enter number of numbers to be checked\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Enter atleast 2 numbers");
    
    }
    else
    printf("Enter numbers (1):  ");
    scanf("%d",&num);
    max=min=num;
    {
        for(int i=2;i<=n;i++)
        {
            printf("Enter numbers (%d):  ",i);
            scanf("%d",&num);
            if(num<min)
            {
                min=num;
            }
            if(num>max)
            {
                max=num;
            }
        }
        printf("maximum number is %d\n",max);
        printf("minimum number is %d",min);
    }
    return 0;
}
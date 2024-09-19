#include<stdio.h>
int main()
{
    int n,max,sec_max,num,d;
    printf("Enter number of numbers to be checked\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Enter atleast 2 numbers");
    
    }
    else
    printf("Enter numbers (1):  ");
    scanf("%d",&num);
    max=sec_max=num;
    {
        for(int i=2;i<=n;i++)
        {
            printf("Enter numbers (%d):  ",i);
            scanf("%d",&num);
            if(num>sec_max)
            {
                sec_max=num;
            }
            if(sec_max>max)
            {
                d=max;
                max=sec_max;
                sec_max=d;
            }

        }
        if(sec_max==max)
        {
            printf("dont enter same number ");
        }
        else{
        printf("maximum number is %d\n",max);
        printf("second maximum number is %d",sec_max);
        }
    }
    return 0;
}
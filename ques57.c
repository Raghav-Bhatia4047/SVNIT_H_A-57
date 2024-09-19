#include<stdio.h>
int main()
{
    int max,sec_max,d,n;
    printf("Enter number of numbers to be checked\n");
    scanf("%d",&n);
    int a[n];
    if(n<2)
    {
        printf("Enter atleast 2 numbers");
    
    }
    else
    printf("Enter numbers (1):  ");
    scanf("%d",&a[1]);
    max=sec_max=a[1];
    {
        for(int i=2;i<=n;i++)
        {
            printf("Enter numbers (%d):  ",i);
            scanf("%d",&a[i]);
            if(a[i]>sec_max)
            {
                sec_max=a[i];
            }
            if(sec_max>max)
            {
                d=max;
                max=sec_max;
                sec_max=d;
            }

        }
        printf("Array is ");
        for(int i=1;i<=n;i++)
        {
            printf("%d \t",a[i]);
        }
        if(sec_max==max)
        {
            printf("dont enter same number ");
        }
        else{
        printf("\nmaximum number is %d\n",max);
        printf("second maximum number is %d",sec_max);
        }
    }
    return 0;
}
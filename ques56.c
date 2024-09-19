#include<stdio.h>
int main()
{
    int a[10],n,d=0,b=0,c=0;
    printf("Enter numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            d=d+1;
        }
        else if(a[i]<0)
        {
            b=b+1;
        }
        else 
        {
            c=c+1;
        }
 

    }
           printf("positive numbers present is =%d\n",d);
        printf("negative numbers present is =%d\n",b);
        printf(" zero elements are =%d",c);
    return 0;
}
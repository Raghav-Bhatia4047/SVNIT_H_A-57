#include<stdio.h>
int main()
{
    int a[10],b,flag=0,pos;
    printf("Enter A array values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched\n");
    scanf("%d",&b);

    for(int i=0;i<10;i++)
    {
        if(b==a[i])
        {
           flag=1;
           pos=i+1;
            printf("position of number %d is %d\n",b,pos);
        }
        
    }
    if (flag==0)
    {
        printf(" Number %d is not present ",b);
    }
}
 
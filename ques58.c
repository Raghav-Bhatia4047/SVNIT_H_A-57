#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int n; 
    printf("Enter number for a array\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter number for b array\n");
    for(int i=0;i<10;i++)
    {
         printf("Enter number %d: ",i+1);
        scanf("%d",&b[i]);
    }
    for (int i=0;i<10;i++)
    {
        c[i]=a[i]+b[i];
        printf("addition array is =%d\n",c[i]);
    }
    return 0;
}
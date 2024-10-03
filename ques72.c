#include<stdio.h>
int main()
{
    int n,b;
    printf("Enter maximum size of array\n");
    scanf("%d",&n);
    int a[n],c[n];
    printf("Enter number of array\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter number of times you have to rotate array\n");
    scanf("%d",&b);
    if(b>n)
    {
        b=b-n;
    }
    else
    {
     b=b;
    }
    for(int i=0;i<n;i++)
    {
        if((i+b)<n)
        {
            c[i+b]=a[i];

        }
        else
        {
            c[i+b-n]=a[i];
        }
    }
    printf("Rotated array is \n");
    for(int i=0;i<n;i++)
    {
    printf("%d\n",c[i]);
    }
    return 0;
}
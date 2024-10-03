#include<stdio.h>
int main()
{
    int n,c;
    printf("number of elements of array A\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array A\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if (a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;

            }
            else
            {
                continue;
            } 

        }
    }
     printf("Array A is : \n");
    for(int i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
}
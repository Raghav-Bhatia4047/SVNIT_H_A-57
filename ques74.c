#include<stdio.h>
int main()
{
    int n,m,c,d,k,f;
    printf("number of elements of array A\n");
    scanf("%d",&n);
    printf("number of elements of array B\n");
    scanf("%d",&m);
    int a[n],b[m];
    printf("Enter elements of array A\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter elements of array B\n ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
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
    for(int i=0;i<m;i++)
    {
       
        for(int j=i;j<m;j++)
        {
            if (b[i]>b[j])
            {
                d=b[i];
                b[i]=b[j];
                b[j]=d;
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
    printf("Array B is : \n");
    for(int i=0;i<n;i++)
    {
       printf("%d\n",b[i]);
    }
    k=m+n;
    int e[k];
     for(int i=0;i<n;i++)
    {   
        e[i]=a[i];

    }
    for(int j=0;j<m;j++)
    {
        e[n+j]=b[j];
    }
       for(int i=0;i<k;i++)
    {
        for(int j=i;j<k;j++)
        {
            if (e[i]>e[j])
            {
                f=e[i];
                e[i]=e[j];
                e[j]=f;

            }
            else
            {
                continue;
            } 

        }
    
    }
    printf("Array C is: \n");
    for(int i=0;i<k;i++)
    {
        printf("%d\n",e[i]);
    }

    return 0;
}    
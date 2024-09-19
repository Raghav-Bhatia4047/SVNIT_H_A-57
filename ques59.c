#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int n,d; 
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
       d=a[i];
       a[i]=b[i];
       b[i]=d;
    }
        printf("a array is\n ");
    for (int i=0;i<10;i++)
    {
    
        printf("%d\n",a[i]);
    }
     printf("b array is\n ");
      for (int i=0;i<10;i++)
    {
       
        printf("%d\n",b[i]);
    }

    return 0;
}
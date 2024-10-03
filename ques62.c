#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int n,d; 
    printf("Enter number for a array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reversed array is \n");
   for(int i=0;i<5;i++)
   {
    d=a[i];
    a[i]=a[9-i];
    a[9-i]=d;
    
   }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

}
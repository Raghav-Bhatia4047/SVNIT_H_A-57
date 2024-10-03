#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of matrix");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter elements of a matrix\n");
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     
    printf("Enter elements of b matrix\n");
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
      printf("a matrix is \n");
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
  
      printf("b matrix is \n");
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("C matrix is \n");
     for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}
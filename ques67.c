#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements of a matrix\n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     
    printf("Enter elements of b matrix\n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
      printf("a matrix is \n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
  
      printf("b matrix is \n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("C matrix is \n");
     for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}
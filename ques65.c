#include<stdio.h>
int main()
{
    int a[3][3],d;
    printf("Enter elements of matrix\n");
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
          printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j>=i)
        { d=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=d;
        }

        }
    }
    printf("Transpose matrix is \n");
     for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
          printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}

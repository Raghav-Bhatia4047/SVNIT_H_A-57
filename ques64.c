#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
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
    printf("Sum of row is ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        
        printf("%d, ",sum);
        sum=0;
    }
}
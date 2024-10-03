#include<stdio.h>
int main()
{
    int a[3][3],small,large;
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
    small=large=a[0][0];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(small>a[i][j])
            {
               small= a[i][j];
            }
            if(large<a[i][j])
            {
                large=a[i][j];
            }
        }
    }
    printf(" largest number is = %d \n",large);
    printf(" smallest number is = %d",small);
    return 0;
}
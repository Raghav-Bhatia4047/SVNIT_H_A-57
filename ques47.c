#include<stdio.h>
void main()
{
    int a;
    printf("Enter number of rows\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    { 
        int c=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",c);
            c=c+1;
        }
        printf("\n");

    }
}
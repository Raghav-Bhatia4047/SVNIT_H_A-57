#include<stdio.h>
void main()
{
    int a,sum=0;
    printf("Enter number of terms\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum=i*i;

    
    printf("%d,",sum);
    }

}
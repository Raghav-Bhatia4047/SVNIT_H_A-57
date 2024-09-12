#include<stdio.h>
void main()
{
    int a,count=1;
    printf("Enter number of terms\n");
    scanf("%d",&a);

    while(count<=a)
    {
    printf("%d/%d!+",count,count);
    count=count+1;
    }
    
    
}


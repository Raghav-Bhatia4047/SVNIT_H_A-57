#include<stdio.h>
void main()
{
    int a,q;
    int flag=1;
    printf("Enter number\n");
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++)
    {   
        q=a%i;
        if(q==0)
        {
            flag=0;
        }

    }
    if(flag==1)
    {
        printf("Prime number");
    } 
    else{
        printf("composite number");
    }
    
    
}
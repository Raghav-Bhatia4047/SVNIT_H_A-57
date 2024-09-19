#include<stdio.h>
int main()
{
    int arr[10],a=0,b=0;
    printf("Enter numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            a=a+1;
        }
        else{
            b=b+1;
        }

    }
            printf("number of odd numbers =%d \n",b);
        printf(" number of even numbers =%d",a);
    return 0;
}
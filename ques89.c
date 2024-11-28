#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*aptr,*bptr;
    printf("enter the array size: ");
    scanf("%d",&n);
    aptr = (int *)malloc(n*sizeof(int));
    bptr = (int *)malloc(n*sizeof(int));
    printf("enter array 1 elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",(aptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d   ",*(aptr+i));
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        *(bptr+i)=*(aptr+(n-i-1));
        
    }
    printf("copied array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(bptr+i));
    }

    
    

  
}
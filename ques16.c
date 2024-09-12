#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a \n");
    scanf("%d",&a);
    printf("Enter b \n");
    scanf("%d",&b);
    printf("Enter c \n");
    scanf("%d",&c);
    if (a > b)
     {
        if (a > c)
         {
           printf("max = %d",a);
        }
         else 
         {
           printf("max = %d",c);
           
        }
    } 
    else 
    {
        if (b > c)
         {
           printf("max = %d",b);
        }
         else 
         {
          printf("max = %d",c);
        }
    }

}

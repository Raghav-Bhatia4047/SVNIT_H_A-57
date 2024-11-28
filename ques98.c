#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,j,*a[3],*b[3];
   int k, *c[3];
   for(i=0;i<3;i++)
  {
    a[i]=(int*)malloc(3*sizeof(int));
   b[i]=(int*)malloc(3*sizeof(int));
   }
   
   
   printf("enter the matrix a elements: \n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",(*(a+i)+j));
    }
   }
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d  ",*(*(a+i)+j));
    }
    printf("\n");
   }
   printf("enter the matrix b elements: \n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",(*(b+i)+j));
    }
   }
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d  ",*(*(b+i)+j));
     
    }
    printf("\n");
   }
   printf("matrix multiplication\n");
   
   for(i=0;i<3;i++)
   {
    c[i]=(int*)calloc(3,sizeof(int));
   }
   
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
   {
    
    for(k=0;k<3;k++)
   {
     *(*(c+i)+j) = *(*(c+i)+j) + *(*(a+i)+k)**(*(b+k)+j);
   }
   }
   }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    printf("%d  ",*(*(c+i)+j));

   }
   printf("\n");
}
}
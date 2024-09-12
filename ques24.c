#include<stdio.h>
#include<math.h>
void main ()
{
  int x,y,n;

  printf("Enter value of x \n");
   scanf("%d",&x);
   printf("Enter value of n \n");
   scanf("%d",&n);
   switch(n)
   {
    case 1: y= 1+x;
    break;
    case 2: y= 1+x/n;
    break;
    case 3: y=1+(x*x*x);
    break;
    default : y=1+n*x;

   }
   printf("y is %d",y);
   }
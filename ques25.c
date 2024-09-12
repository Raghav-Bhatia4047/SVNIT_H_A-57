#include<stdio.h>
int main ()
{
  int i,a,x;
  a=1;
  printf("Enter Number to make table\n");
  scanf("%d",&i);
  
  while(a<=10)
    {
      x=i*a;
      printf("%d \n",x);
      a=a+1;
    }
  return 0;
 

}
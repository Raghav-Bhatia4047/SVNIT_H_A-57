#include<stdio.h>
#include <math.h>
int palidrome(int b);
int main()
{  
    int b;
    printf("Enter number to be check\n");
    scanf("%d",&b);
    palidrome(b);

    return 0;
}
int palidrome(int b)
{
      int num,n,sum,q;
  sum=0;
  n=b;
  while(n!=0)
    {
      q=n%10;
      sum=sum*10+q;
      n=n/10;


    }
  if(sum==b)
  {
    printf("palidrome number");

  }
  else
  {
    printf("Not a palidrome number");

  }
}

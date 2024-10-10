#include<stdio.h>
#include <math.h>
int armstrong(int b);
int main()
{  
    int b;
    printf("Enter number to be check\n");
    scanf("%d",&b);
    armstrong(b);

    return 0;
}
int armstrong(int b)
{
     int n,q,sum=0,a=0;
  n=b;
  while(n!=0)
  {
    n=n/10;
    a=a+1;
  }
  n=b;
  while(n!=0)
    {
      q=n%10;
      sum=sum+round(pow(q,a));
      n=n/10;
    
    }
   if(b==sum)
  {
    printf("armstrong number");
  }
  else
  {
    printf("Not an armstrong number");

  }
}
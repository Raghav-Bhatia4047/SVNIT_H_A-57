#include<stdio.h>
#include<math.h>
int main()
{
  int num,n,q,sum=0,a=0;
  printf("Enter number");
  scanf("%d",&num);
  n=num;
  while(n!=0)
  {
    n=n/10;
    a=a+1;
  }
  n=num;
  while(n!=0)
    {
      q=n%10;
      sum=sum+round(pow(q,a));
      n=n/10;
    
    }
   if(num==sum)
  {
    printf("armstrong number");
  }
  else
  {
    printf("Not an armstrong number");

  }

}
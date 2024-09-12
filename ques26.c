#include<stdio.h>
int main()
{
  int i,N,even,odd;
  i=1,even=0,odd=0;
  printf("Enter Number");
  scanf("%d",&N);
  while(i<=N)
    {
      if(i%2==0)
      {
        even=even+i;
      }
      else
      {
        odd= odd+i;
      }
      i=i+1;
    }
  printf("sum of even number is %d \n",even);
  printf("sum of odd number is %d",odd);
  
}
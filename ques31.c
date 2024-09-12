#include<stdio.h>
int main()
{
  int num,n,sum,q;
  sum=0;
  printf("Enter number \n");
  scanf("%d",&num);
  n=num;
  while(n!=0)
    {
      q=n%10;
      sum=sum+q;
      n=n/10;


    }
  printf("sum of digits of number is  \n%d",sum);
}
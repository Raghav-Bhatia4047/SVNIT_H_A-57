#include<stdio.h>
int exchange(int x,int y);
int main()
{
    int x,y;
    printf("Enter value of X\n");
    scanf("%d",&x);
    printf("Enter value of Y\n");
    scanf("%d",&y);
    exchange(x,y);
    
    return 0;
}
int exchange(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("X = %d\n",x);
    printf("Y = %d",y);

}
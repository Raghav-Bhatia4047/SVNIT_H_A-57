#include<stdio.h>
int check(int a);
int main()
{
    int a;
    printf("Enter number to be check\n");
    scanf("%d",&a);
    check(a);
    return 0;
}
int check(int a)
{
    if (a%2==0)
    printf("even number");
    else 
    printf("odd number");

}
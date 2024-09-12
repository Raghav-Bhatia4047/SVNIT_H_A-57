#include<stdio.h>
int main()
{
    printf("enter\n+ to add\n- to subtract\n/  to divide\n* to multiply\n");
    
    char c;
    scanf("%c",&c);
    int a,b,d;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case '+': 
           (d=a+b);
            break;
        case '-':
           (d=a-b);
           break;
        case '/':
           (d=a/b);
           break;
        case '*':
           (d=a*b);
           break;
    }
    printf("ans=%d",d);
}
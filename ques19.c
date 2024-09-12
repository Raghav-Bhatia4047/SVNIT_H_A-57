#include<stdio.h>
void main()
{
    char c,result;
    int n;
    printf("Enter Character");
    scanf("%c",&c);
    n=c;

    result= (97<=n && n<=122)?printf("small case letter"):printf("capital letter");
    printf("%c",result);


}
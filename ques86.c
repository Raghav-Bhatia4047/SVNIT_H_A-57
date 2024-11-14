#include<stdio.h>
int strlen1(char a[100]);
int main()
{
    char a[100];
    printf("read the line:");
    gets(a);
    strlen1(a);
}
int strlen1(char a[100])
{
    int i=0;
    while(a[i++]!='\0');
    i--;
    printf("len of string=%d",i); 
}

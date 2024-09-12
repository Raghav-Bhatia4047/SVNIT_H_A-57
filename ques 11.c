#include<stdio.h>
int main()
{
    int sec,h,m,s;
    printf("Enter Time in seconds\n");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-h*3600)/60;
    s=(sec-h*3600-m*60);
    printf("%dsecs=%dHours:%dMinutes:%dseconds",sec,h,m,s);
}
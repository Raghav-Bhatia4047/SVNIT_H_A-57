#include<stdio.h>
int main()
{
    int day,hour,min,seconds;
    printf("Enter Days hours and minutes\n");
    scanf("%d%d%d",&day,&hour,&min);
    seconds=(day*3600*24)+(hour*3600)+(min*60);
    printf("Time in seconds %dseconds \n",seconds);
}
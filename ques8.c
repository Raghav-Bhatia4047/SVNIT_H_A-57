#include<stdio.h>
int main()
{
    int t,day,hours,min;
    printf("Enter Time in seconds\n");
    scanf("%d",&t);
    min=t/60;
    hours=min/60;
    day=hours/24;
    printf("Days= %d days\n",day);
    printf("Hours = %d hours\n",hours);
    printf("Minutes = %d minutes\n",min);
}
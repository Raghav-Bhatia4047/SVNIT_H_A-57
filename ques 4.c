#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter Temperature in Fehrenite\n");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Temperature in celsius is %f\n",C);

}
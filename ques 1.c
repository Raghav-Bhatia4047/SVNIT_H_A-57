#include<stdio.h>
int main()
{
    float P,r,T,Si;
    printf("Enter Principal value\n ");
    scanf("%f",&P);
    printf("Enter Rate per annum\n ");
    scanf("%f",&r);
    printf("Enter Time in years\n");
    scanf("%f",&T);
    Si= (P*r*T)/100;
    printf("Simple Interest is %f\n",Si);
    return 0;


}

#include<stdio.h>
void main()
{
    float a,sales;
    printf("Enter sales value= ");
    scanf("%f",&sales);
    if(sales<=500)
    {
        a=sales*0.05;
    }
    else if(sales>500 && sales<=2000)
    {
        a=((sales-500)*0.1)+35;
    }
    else if(sales>2000 && sales<=5000)
    {
        a=((sales-2000)*0.12)+185;
    }
    else{
        a=sales*0.125;
    }
    printf("commission is = %f",a);
}
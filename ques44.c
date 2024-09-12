#include<stdio.h>
void main()
{
    float a,unit;
    printf("Enter unit value= ");
    scanf("%f",&unit);
    if(unit<=200)
    {
        a=unit*0.5;
    }
    else if(unit>200 && unit<=400)
    {
        a=((unit-200)*0.65)+100;
    }
    else if(unit>400 && unit<=600)
    {
        a=((unit-400)*0.8)+230;
    }
    else{
        a=((unit-600)*1.25)+425;
    }
    printf("amount is = %f",a);
}
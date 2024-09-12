#include<stdio.h>
int main()
{
    int a,b,c,s;
    float area;
    printf("\nEnter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %f\n",area);
}
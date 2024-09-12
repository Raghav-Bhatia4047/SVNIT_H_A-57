#include<stdio.h>
int main()
{

    float P,C,M,B,E,Total,Percentage;
    printf("Enter marks of Physics out of 100\n");
    scanf("%f",&P);
    printf("Enter marks of Chemistry out of 100\n");
    scanf("%f",&C),
    printf("Enter marks of Mathematics out of 100\n");
    scanf("%f",&M);
     printf("Enter marks of Biology out of 100\n");
    scanf("%f",&B);
     printf("Enter marks of English out of 100\n");
    scanf("%f",&E);
    Total = P+M+C+E+B;
    printf("Total marks are %f\n",Total);
    Percentage = Total/5;
    printf("Percentage is %f\n",Percentage);
}
#include<stdio.h>
int main()
{
    int P,C,M,E;
    float CM;
    printf("Enter marks of Mathematics out of 200\n");
    scanf("%d",&M);
    printf("Enter marks of Physics out of 200\n");
    scanf("%d",&P);
    printf("Enter marks of Chemistry out of 200\n");
    scanf("%d",&C);
    printf("Enter marks of Enterance examination out of 100\n");
    scanf("%d",&E);
    CM = P/2+C/2+M/2+E;
    printf("Cut off is %f\n",CM);
}
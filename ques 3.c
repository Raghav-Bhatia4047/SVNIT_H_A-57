#include<stdio.h>
int main()
{
    int BS,OA,HRA,gross;
    printf("Enter Salary \n");
    scanf("%d",&BS);
    printf("Enter HRA\n");
    scanf("%d",&HRA);
    printf("Enter Other allowances\n");
    scanf("%d",&OA);
    gross= BS+OA+HRA ;
    printf("Gross salary is %d\n",gross);


}
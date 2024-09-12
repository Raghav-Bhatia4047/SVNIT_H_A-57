#include<stdio.h>
int main()
{
     float P,C,M,E,CS,T_marks,PER;
     int a;
    printf("Enter marks in physics:");
    scanf("%f",&P);
    printf("Enter marks in chemistry:");
    scanf("%f",&C);
    printf("Enter marks in maths:");
    scanf("%f",&M);
    printf("Enter marks in English:");
    scanf("%f",&E);
    printf("Enter marks in Computer science:");
    scanf("%f",&CS);
    T_marks=P+C+M+E+CS;
    PER=(T_marks/500)*100;
    a=PER/10;

    switch (a)
    {
        case 10:
        case 9:
        case 8: printf("A division");
        break;
        case 7:
        case 6: printf("B division");
        break;
        case 5:
        case 4: printf("C division");
        break;
        case 3: printf("D division");
        break;
        case 2:
        case 1:
        case 0: printf("Fail");
        break;
        default: printf("Invalid marks");

    }


}

#include<stdio.h>
void main()
{
    char a;
    printf("\n Enter '+' for addition \n Enter '-' for subtraction \n Enter '*' for multiply \n Enter '/' for division\n");
    scanf("%c",&a);
    int b,c;
    float d; 
    printf("Enter b and c \n");
    scanf("%d%d",&b,&c);

    switch (a)
    {
        case '+' : d=(b+c);
        break;
        case '-' : d=(b-c);
        break;
        case '*' : d=(b*c);
        break;
        case '/' : d=(b/c);
        break;
        
        default : printf("incorrect expression");
    }
        printf("%f",d);


    

}
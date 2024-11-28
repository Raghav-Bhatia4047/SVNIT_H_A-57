#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    
    a =( int*)malloc(1*sizeof(int));
    printf("enter the number: ");
    scanf("%d",a);
    int square = (*a) * (*a);
    int cube = (*a) * (*a) * (*a) ;
    printf("square of a number =%d\n",square);
     printf("cube of a number =%d",cube);
}
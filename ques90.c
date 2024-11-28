#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *a ;
    a = (char*) malloc(500*sizeof(char));
    printf("enter the string:");
    gets(a);
    puts(a);

    int  count =0;
    int number =0;
    while(*a!='\0')
    {
        count  = count + 1;
        
        if(*a!=' ')
        {
            number = number +1;
        }
        a++;
    }
    printf("length including spaces =%d\n",count);
    printf("length excluding spaces = %d",number);
   
}
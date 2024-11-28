#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *aptr;
    int i,count =0;
    aptr = (char*)malloc(500*sizeof(char) );
    printf("enter the string : ");
    gets(aptr);
    puts(aptr);
  while(*aptr!='\0')
    {
        switch(*aptr)
        {
             case'a':
             case'e':
             case'i':
             case'o':
             case'u':
             case'A':
             case'E':
             case'I':
             case'O':
             case'U':
                count = count+1;
        }
          *aptr++; 
        
    }
    printf("number of vowels = %d ",count);
}

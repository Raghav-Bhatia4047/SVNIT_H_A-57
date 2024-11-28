#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char *aptr,*bptr,i;
    aptr = (char*)malloc(500*sizeof(char));
    bptr = (char*)malloc(500*sizeof(char));
    printf("enter the string :");
    gets(aptr);
    
    int  l =strlen(aptr);
    for(i=0;i<l;i++)
    {
      *(bptr+i)=*(aptr+(l-i-1));
    }
    puts(bptr);
}
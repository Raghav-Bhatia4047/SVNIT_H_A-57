#include<stdio.h>
void vowel(char c);
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    vowel(c);
    return 0;
}
void vowel(char c)
{
    if(c=='a'|| c=='e'||c=='i'||c=='u'||c=='o'||c =='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("Vowel");
    }
    else{
    printf("Not a Vowel");
    }
}
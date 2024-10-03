#include<stdio.h>
void menu();
int main()
{
    int n,g=0,b=0,c=0,d=0,e=0,f=0;
    printf("Enter number of voters");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
         menu();
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 1: g=g+1;
            break;
            case 2: b=b+1;
            break;
            case 3: c=c+1;
            break;
            case 4: d=d+1;
            break;
            case 5: e=e+1;
            break;
            default : f=f+1;

        }
    }
    printf("votes of candidate 1 is =%d\n",g);
    printf("votes of candidate 2 is =%d\n",b);
    printf("votes of candidate 3 is =%d\n",c);
    printf("votes of candidate 4 is =%d\n",d);
    printf("votes of candidate 5 is =%d\n",e);
    printf("Spoil ballots are =%d\n",f);
    return 0;
}
    void menu()
    {
        printf(" Enter 1 to vote candidate 1\n");
        printf(" Enter 2 to vote candidate 2\n");
        printf(" Enter 3 to vote candidate 3\n");
        printf(" Enter 4 to vote candidate 4\n");
        printf(" Enter 5 to vote candidate 5\n");
    }
    

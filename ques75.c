#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,small,large;
    printf("Enter number of students\n");
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++)
    {
        printf("Roll No.: = %d\n",i+1);
        printf("Enter marks of subject 1:");
        scanf("%d",&a[i]);
        printf("Enter marks of subject 2:");
        scanf("%d",&b[i]);
        printf("Enter marks of subject 3:");
        scanf("%d",&c[i]);
        d[i]=a[i]+b[i]+c[i];
        if(a[i]>100&&a[i]<0||b[i]>100&&b[i]<0||c[i]>100&&c[i]<0)
        {
            printf("Enter correct marks");
            exit(1);
        }

    }
    printf("Roll no.\tsubject 1\tsubject 2\tsubject 3\ttotal\n");
    for(int i=0;i<n;i++)
    {
        printf("  %d\t\t%d\t\t%d\t\t%d\t\t%d\t\t",i+1,a[i],b[i],c[i],d[i]);
        printf("\n");
    }
    large=a[0];
    for(int i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
            small=i+1;
        }
    }
    printf("highest marks  of subject 1 is %d of roll no. %d\n",large,small);
     large=b[0];
    for(int i=0;i<n;i++)
    {
        if(large<b[i])
        {
            large=b[i];
            small=i+1;
        }
    }
    printf("highest marks of subject 2 is  %d of roll no. %d\n",large,small);
     large=c[0];
    for(int i=0;i<n;i++)
    {
        if(large<c[i])
        {
            large=c[i];
            small=i+1;
        }
    }
    printf("highest marks of subject 3 is %d of roll no. %d\n",large,small);
     large=d[0];
    for(int i=0;i<n;i++)
    {
        if(large<d[i])
        {
            large=d[i];
            small=i+1;
        }
    }
    printf("highest total marks are %d of roll no. %d\n",large,small);
   
    return 0;
}
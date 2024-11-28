#include<stdio.h>
struct employee
{
    int ID;
    char name[100];
    float salary;
};
int main()
{
    printf("enter number of employee:");
    int n;
    scanf("%d",&n);
    struct employee a[n];
    struct employee *ptr;
    for(int i=0;i<n;i++)
    {
        ptr=&a[i];
        printf("enter employee number:");
        scanf("%d",&ptr->ID);
        printf("enter employee name:");
        scanf("%s",ptr->name);
        printf("enter employee basic pay:");
        scanf("%f",&ptr->salary);
    }
    for(int i=0;i<n;i++)
    {
        ptr=&a[i];
        printf("%d\t%s\t%0.2f\n",ptr->ID,ptr->name,ptr->salary);
    }


}
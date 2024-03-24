#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("\n Enter your name:");
    scanf("%s",name);
    printf("\n Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s age is %d eligible for vote",name,age);
    }
    else
    {
        printf("\n %s age is %d Noteligible for vote",name,age);
    }
    return 0;

}
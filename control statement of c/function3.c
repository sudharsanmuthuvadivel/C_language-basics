// Return without argyment function in c
#include<stdio.h>

int add();//function decleration

int main()
{
    int a;//Function calling
    a=add();
    printf("\nTotal:%d",a);
    return 0;
}
int add()//Function Defenition
{
    int a,b;
    printf("\nENter the value of A&B:");
    scanf("%d%d",&a,&b);
    return a+b;
}
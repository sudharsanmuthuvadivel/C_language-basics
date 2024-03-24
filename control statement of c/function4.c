// Return with argument function in c
#include<stdio.h>

int add(int,int);//function decleration
int main()
{
    int a,b;//actual parameter
    printf("\nEnter the value of A&B:");
    scanf("%d%d",&a,&b);
    a=add(a,b);//funtion calling.
    printf("\nTotal:%d",a);
    return 0;
}
int add(int a,int b)//formal parameter,Function Defenition
{
    return a+b;
}


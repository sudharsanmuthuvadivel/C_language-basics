#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe result of addition     :%d",add(a,b));
    printf("\nThe result of subtraction  :%d",sub(a,b));
    printf("\nThe result of multipication:%d",mul(a,b));
    printf("\nThe result of division     :%d",div(a,b));
}
int add(int x,int y)
{
    return (x+y);
}
int sub(int x, int y)
{
    return (x-y);
}
int mul(int x, int y)
{
    return (x*y);
}
int div(int x, int y)
{
    return (x/y);
}
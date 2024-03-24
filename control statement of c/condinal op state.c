#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    c=a>b? a:b;
    printf("\n The greatest no is:%d",c);
    return 0;
}
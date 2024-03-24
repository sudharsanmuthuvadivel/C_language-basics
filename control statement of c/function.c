#include<stdio.h>

void sum()
{
    int a,b,c;
    printf("\nEnter the number A:");
    scanf("%d",&a);
    printf("\nEnter the number B:");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal:%d",c);
}
int main()
{
    int n,i;
    printf("\nEnter the Limit:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        sum();
    }
    return 0;
}
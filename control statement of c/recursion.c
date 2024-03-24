#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("\nThe factorial is %d.",fact(num));
}
int fact(int x)
{
    if (x==0)
    return 1;
    else
    return (x*fact(x-1));
}
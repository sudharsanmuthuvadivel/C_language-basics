//Finding sum of 1st 'n' numbers;
#include<stdio.h>
int sum_of_numbers(int);
int main()
{
    int limit;
    printf("\nEnter the last number or limit:");
    scanf("%d",&limit);
    printf("\nSum of 1st %d number is:%d",limit,sum_of_numbers(limit));
    return 0;
}
int sum_of_numbers(int x)
{
    if (x==0)                    ///// simple way to find sum of n number is:
    return 0;                    ///// formula= (n*(n+1))/2
    else
    return (x+ sum_of_numbers(x-1));
}
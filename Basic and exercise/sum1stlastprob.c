#include<stdio.h>

int main()
{
    int n,firstd,lastd,sum;
    printf("\nEnter the number:");
    scanf("%d",&n);
    lastd= n%10;
    while(n>10)
    {
        n=n/10;
    }
    firstd=n;
    sum=firstd+lastd;
    printf("\nSum of 1st and last:%d",sum);
    return 0;
} 




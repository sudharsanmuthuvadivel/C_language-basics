#include<stdio.h>
int main()
{
    int i,n,num,sum;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the Numbers:");
        scanf("%d",&num);
        if (num==0)
        continue;
        sum=sum+num;
    }
    printf("\n Total:%d",sum);
    return 0;
}
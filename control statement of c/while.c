#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}
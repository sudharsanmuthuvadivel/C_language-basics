#include<stdio.h>
int main()
{
    int i=0,n;
    printf("\nEnter the limit:");
    scanf("\n%d",&n);
    do
    {
        printf("\n%d",i);
        i+=3;
    }
    while (i<=n);
    return 0;  
}
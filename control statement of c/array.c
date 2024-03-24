// array
#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nEnter the number:");
        scanf("%d",&a[i]);
    }
   for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)//row
   {
    for (j=1;j<=(2*n)-1;j++)//column(2*n)-1
    {
        if (j>=n-(i-1) && j<=n+(i-1))//star position
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
   }
   return 0;
}
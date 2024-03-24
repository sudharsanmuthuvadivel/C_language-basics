#include<stdio.h>
int main()
{
    int days;
    printf("\nEnter the days:");
    scanf("%d",&days);
    if(days>=1&&days<=5)
    {
        printf("\nFine amount:50paise");
    }
    else if(days>=6&&days<=10)
    {
        printf("\nFine amount:1 Rupee");
    }
    else if(days>=10&&days<=30)
    {
        printf("\nFine amount:5 Rupee");
    }
    else 
    {
        printf("\nYour membership was canceled");
    }
    return 0;
}
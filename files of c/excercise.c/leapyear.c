#include<stdio.h>
#include<conio.h>
int leapyear(int);
int main()
{
    int checkyear,return_num;
    printf("\nEnter the year:");
    scanf("%d",&checkyear);
    return_num=leapyear(checkyear);
    if (return_num==0)//(leapyear(checkyear))
    {
        printf("\n%d is leap year",checkyear);
    }
    else
    {
        printf("\n%d is not a leap year.",checkyear);
    }
    return 0;
}
int leapyear(int x)
{
    
     if (x%100==0)
     {
        if (x % 400==0)
        return 0;
        else
        return 1;
        }
        else 
        {
            if (x % 4==0)
            return 0;
            else
            return 1;
        }
     }
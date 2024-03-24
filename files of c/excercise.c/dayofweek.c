#include<stdio.h>
int main()
{
    int num,n;
    lable:
    printf("\nEnter the numberfor day of week (1-7):");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("\nSunday");
        break;
    case 2:
        printf("\nMondayday");
        break;
    case 3:
        printf("\nTuesday");
        break;
    case 4:
        printf("\nWednessday");
        break;
    case 5:
        printf("\nThursaday");
        break;
    case 6:
        printf("\nFriday");
        break;
    case 7:
        printf("\nSaturday");
        break;    
    default:
        printf("\nInvalid option please try again.");
        break;
    }
    printf("\npress 1 for countinue.");
    scanf("%d",&n);
    if (n==1)
    goto lable;
    else
    
        printf("\nThankyou.");
    
}
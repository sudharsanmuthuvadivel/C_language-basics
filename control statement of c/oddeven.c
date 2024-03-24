#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nGiven number is Even number");
    }
    else{
        printf("\nGiven number is odd number");
    }

    return 0;
}
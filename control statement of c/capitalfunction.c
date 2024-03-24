#include<stdio.h>
void capital(int);
int main()
{
    int choice;
    printf("\nProvide input");
    printf("\nEnter 1 for India.");
    printf("\nEnter 2 for America.");
    printf("\nEnter 3 for Australia.");
    printf("\nPlease enter your choice:");
    scanf("%d",&choice);
    capital(choice);
}
void capital(int c)
{
    switch (c)
    {
    case 1:
        printf("\nCapital is New delhi.");
        break;
    case 2:
        printf("\nCapital is Washington DC.");
        break;
        case 3:
        printf("\nCapital is canberra.");
        break;
    default:
        printf("\nInvalid input.");
        break;
    }
}
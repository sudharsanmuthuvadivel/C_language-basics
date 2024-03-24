#include<stdio.h>
int main()
{
    int ch,qty;
    printf("\n\tMENU CARD");
    printf("\n\t\t1COFFEE       Rs:15");
    printf("\n\t\t2TEA          Rs:10");
    printf("\n\t\t3COLDCOFFEE   Rs:25");
    printf("\n\t\t4CMILKSHAK    Rs:50");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("\nYour have selected the COFFEE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    printf("\nTotal amount:%d",(qty*15));
    break;
    case 2:
    printf("\nYour have selected the TEA");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    printf("\nTotal amount:%d",(qty*10));
    break;
    case 3:
    printf("\nYour have selected the COLD COFFEE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    printf("\nTotal amount:%d",(qty*25));
    break;
    case 4:
    printf("\nYour have selected the MILK SHAKE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    printf("\nTotal amount:%d",(qty*50));
    break;
    default:
    printf("\nInvalid selection.");
    break;
    }
    return 0;
}
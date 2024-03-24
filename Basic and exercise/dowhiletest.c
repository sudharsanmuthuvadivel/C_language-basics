#include<stdio.h>
int main()
{
    int ch,qty,i,net=0;
    do
    {
    printf("\n\tMENU CARD");
    printf("\n\t\t1.COFFEE       Rs:15");
    printf("\n\t\t2.TEA          Rs:10");
    printf("\n\t\t3.COLDCOFFEE   Rs:25");
    printf("\n\t\t4.CMILKSHAK    Rs:50");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("\nYour have selected the COFFEE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    net = net+(qty*15);
    break;
    case 2:
    printf("\nYour have selected the TEA");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    net = net+(qty*10);
    break;
    case 3:
    printf("\nYour have selected the COLD COFFEE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    net = net+(qty*25);
    break;
    case 4:
    printf("\nYour have selected the MILK SHAKE");
    printf("\nEnter the quantity:");
    scanf("%d",&qty);
    net = net+(qty*50);
    break;
    default:
    printf("\nInvalid selection.");
    break;
    }
    printf("\nDo you want to countinue press 0 or 1:");
    scanf("%d",&i);
    }
    while (i<=1);
    printf("\nTotal amount:%d",net);
    printf("\nThanks you come again.");
    return 0;
}
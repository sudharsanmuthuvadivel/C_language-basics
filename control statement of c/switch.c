#include <stdio.h>
int main()
{
    int ch;
    printf("\n Enter the value:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\n one");
        break;
    case 2:
        printf("\n two");
        break;
    case 3:
        printf("\n three");
        break;
    default:
        printf("\n invalid");
        break;
    }
    return 0;
}
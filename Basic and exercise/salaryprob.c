#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("\n Enter the salary:");
    scanf("%f",&bs);
    da=(bs*40)/100;
    printf("\nDearness allowance:%0.2f",da);
    hra=(bs*20)/100;
    printf("\nHRA:%0.2f",hra);
    gs=bs+da+hra;
    printf("\nGross salary:%0.2f",gs);
    return 0;
}

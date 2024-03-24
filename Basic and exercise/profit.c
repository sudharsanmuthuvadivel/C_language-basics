#include<stdio.h>

int main()
{
    float c,s,p,totalproduct;
    printf("Enter the total product:");
    scanf("%f",&totalproduct);
    printf("Enter the selling price:");
    scanf("%f",&s);
    printf("Enter the total profit:");
    scanf("%f,&p");
    c=(s-p)/totalproduct;
    printf("profit of one product:%0.2f",c);
    return 0;
}
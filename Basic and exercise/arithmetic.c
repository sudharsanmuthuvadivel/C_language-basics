#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("\nEnter the 2nos:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n total: %d",c);
    c=a-b;
    printf("\n diffrence:%d",c);
    c= a*b;
    printf("\n multiplication:%d",c);
    x= (float)a/(float)b;
    printf("\n div:%0.2f",x);
    c= a%b;
    printf("\n mod:%d",c);
    return 0;

}
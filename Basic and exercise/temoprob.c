#include<stdio.h>
int main()
{
    float fahrenheit,centigrade;
    printf("\nEnter the temp in *F:");
    scanf("%f",&fahrenheit);
    centigrade=(fahrenheit-32)*(5.0/9.0);
    printf("\ntemp in *c:%0.2f",centigrade);
    return 0;
}
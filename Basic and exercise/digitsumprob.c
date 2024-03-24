#include<stdio.h>
int main()
{
    int num,sum=0,sum1,reverse=0;
    printf("\nEnter the number:");
    scanf("%d",&num);
    while (num !=0)
    {
        sum +=num%10;//5
        //printf("\n%d",sum);
        sum1 = num%10;//5
        num=num/10;//1234
        reverse=(reverse*10)+sum1;//54321
    }
    printf("\nDigit sum:%d",sum);
    printf("\ndigit reverse:%d",reverse);
    return 0;
}
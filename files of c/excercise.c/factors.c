/*finding factors of given number and finding perfect number*/
#include<stdio.h>
void perfectnum(int);
int main()
{
    int num;
    printf("\nEnter the Number:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)//for num=500, it will purely divised by half of the number then 500 so using num/2.
    {
        if(num%i==0)
        {
            printf("%d ",i);   
        }
    }
    printf("%d ",num);
    perfectnum(num);
    return 0;
}
void perfectnum(int num)
{
    int sum=0;
    for(int i=1;i<=num/2;i++)// sum of factors of number is(exclude num)= num,then its called by perfect number.
    {
        if(num%i==0)
        {
            sum +=i;   
        }
    }
    if(sum==num)
    printf("\nGiven number %d is perfect number.",num);
    else
    printf("\nGiven number %d is not perfect number.",num);
}
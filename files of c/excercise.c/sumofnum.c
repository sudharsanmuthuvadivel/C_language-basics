/*Using function finding sum of entering number eg:167 => 1+6+7=14 
and reversing the numbers*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int digitsum(int);
int reverse(int);
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("\nsum of digit: %d",digitsum(num));
    printf("\nreversing number is %d",reverse(num));
    return 0;
}

int digitsum(int num)
{
    int sum=0;
    while (num !=0)
    {
        sum+=num%10;//4
        num=num/10;//123
    }  
    return sum;
}

int reverse(int num)
{
    int sum1,reverse=0;
     while (num !=0)
    {
       
        sum1=num%10;//for reversing purpose
        num=num/10;//123
        reverse=(reverse*10)+sum1;//reversing the number.
    }  
    return reverse;
}
    
    
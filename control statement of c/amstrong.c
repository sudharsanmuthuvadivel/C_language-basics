/*Finding Armstrong number 
eg: given number 1456.... if (6^4)+(5^4)+(4^4)+(1^4)= given number
power 4 mean number of digits.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, digit=0, sum=0, temp;
    printf("\nEnter the Number: ");
    scanf("%d", &num);

    for (i=num; i>0; i=i/10){///finding number of didgits.
        digit++;
    }
    
    
    temp=num;//temporary save the number
    while (temp>0)
    {
        sum=sum + pow(temp%10,digit);//pow(number,power)....like 5^4 = pow(5,4).
        temp=temp/10;
    }
    printf("\n%d", sum);
    
    if (sum==num)
    printf("\nGiven number is Armstrong number.");
    else
    printf("\nGiven number is not Armstrong number.");
    return 0;
}


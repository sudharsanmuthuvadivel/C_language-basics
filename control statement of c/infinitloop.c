//number divisible by 5 or not using infinte loop
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=0,mod=0;
    for(;;)//while(1)
    {
        printf("\nPlease enter the number(exit 0):");
        scanf("%d",&num);
        if (num==0)
        {
            printf("\nThnakyou for using the program.");
            break;
        }
        mod=num%5;
        if (mod==0)
        {
            printf("\nthen number is divisible by 5.");
        }
        else
        {
            printf("\nthe number is not divisible by 5.");
        }
    } return 0;

}
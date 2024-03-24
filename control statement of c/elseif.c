#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the value:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("\n %d is Negative value:",a);
    }
    else if(a==0)
    {
        printf("\n Given value is Zero:");
    }
    else if(a>0)
    {
        printf("\n %d is Positive value:",a);
    }
    return 0;

}
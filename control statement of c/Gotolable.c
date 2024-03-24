// goto lable
#include<stdio.h>
int main()
{
    int i=0;
    sudha:
    printf("\n%d",i);
    i++;
    if (i!=10)
    {
        goto sudha;
    }
    printf("\nEnd");
    return 0;
}
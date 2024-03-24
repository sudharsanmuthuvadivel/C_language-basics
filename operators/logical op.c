#include<stdio.h>
int main()
{
    int a=45;
    printf("\n Logical And:%d",(a>=35 && a<=100));
    printf("\n Logical OR :%d",(a>=35 || a<=100));
    printf("\n Logical NOT:%d",!(a>=35));
    return 0;
}
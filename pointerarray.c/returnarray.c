//Using function to get array element and return to array(as pointer).
#include<stdio.h>
#define SIZE 5 // macro def

int *getarray();
int main()
{
    int *p,i;
    p=getarray();
    for (i=0;i<SIZE;i++)
    printf("%d",*p+i);
    return 0;
}
int *getarray()
{
    static int a[SIZE],i;
    printf("\nEnter the %d element:",SIZE);
    for (i=0;i<SIZE;i++)
    scanf("\n%d",&a[i]);
    return a;
}
#include <stdio.h>
int square(int);

int main(void)
{
    int a;
    printf("\n Enter the Numbers A:");
    scanf("%d",&a);
    a=square(a);
    printf("\nTotal:%d",a);
    return 0;
}
int square(int a)
{
    int s;
    s=a*a;
    return s;
}
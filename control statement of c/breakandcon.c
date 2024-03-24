#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if (i==8)
        break;//program stop when i=8
        if (i==5)//program countinue but skip the current i vakue(5)
        continue;
        printf("\n%d",i);
    }
    return 0;
}
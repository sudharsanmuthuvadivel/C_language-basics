#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int num1, int num2, int num3, int num4)
{
    int greatest = num1;
    if (greatest < num2 && num2>num3 && num2>num4)
        greatest = num2;
    else if (greatest < num3 && num2<num3 && num4<num3)
        greatest = num3;
    else if (greatest < num4 && num2<num4 && num3<num4)
        greatest = num4;
    else 
        greatest=num1;
    return greatest;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
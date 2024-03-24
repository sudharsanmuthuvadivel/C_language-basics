#include<stdio.h>
int main()
{
    int a=25,b=45,c;
    printf("\n Bitwise And:%d",a&b);
    printf("\n Bitwise Or :%d",a|b);
    printf("\n Bitwise Xor:%d",a^b);
    printf("\n Bitwise Not:%d",~a);
    printf("\n Bitwise Xnor:%d",~(a^b));
    a=16;
    b=a<<2;
    c=a>>2;
    printf("\n Left shift:%d",b);
    printf("\n Right Shift:%d",c);

    return 0;

}
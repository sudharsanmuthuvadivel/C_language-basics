#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the 2nos:");
    scanf("%d%d",&a,&b);//10,5
    printf("\n A:%d B:%d",a,b);
    // a=a+b;//15
    // b=a-b;//10
    // a=a-b;//5
    c=a;//10
    a=b;//5
    b=c;//10
    printf("\n A:%d B:%d",a,b);
    return 0;
}


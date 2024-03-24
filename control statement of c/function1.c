// No return withount argument function in c
/*
1.Function Decleration
2.Function Definition
3.Function Calling
*/
#include<stdio.h>
// Function Decleration
void add();
void mul();
int main()
{
    // Function Calling
    add();
    mul();
    return 0;
}
// Function Definition
void add()// void mean no return,that mean no datas return to the main program.
{
    int a,b,c;
    printf("\nEnter the number A,B:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal:%d",c);
}
void mul()
{   int a,b,c;
    printf("\nEnter the number A,B:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\nmultiply:%d",c);
}
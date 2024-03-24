// No Return With Argument Function in C
#include<stdio.h>
// Function Decleration
void add(int ,int);
void mul(int,int);
int main()
{
    
    int a,b;
    printf("\nEnter the 2 numbers A,B:");
    scanf("%d%d",&a,&b);
    // Function Calling
    add(a,b);//Actual parameter
    mul(a,b);
    return 0;
}
// Function Definition
void add(int a,int b)// Formal parameter
{
    int c;
    c=a+b;
    printf("\nTotal:%d",c);
}
void mul(int x,int y)// Formal parameter
{
    int c;
    c=x*y;
    printf("\nmultiply:%d",c);
}
//What is the size of the struct MyStructure on a 32-bit system?
#include<stdio.h>

struct MyStructure {
char a;
int b;
char c;
double d;
};
int main()
{
    struct MyStructure e;
    printf("\nsize of struct is%d",sizeof(e));
 
    return 0;
}
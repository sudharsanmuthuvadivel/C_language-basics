//passing union to function.
#include<stdio.h>
#include<conio.h>
#include<string.h>

union data
{
    char str[30];
    int num;
};
void printstr(union data);//(union data*)  for pointer.
int main()
{
    union data var;
    strcpy(var.str,"Hi sudharsan Have a nice day.");
    printstr(var);//(&var)
    return 0;
}
void printstr(union data d)//(union data* d)
{
    printf("\n%s",d.str);//printf("\n%s",d->str);
}
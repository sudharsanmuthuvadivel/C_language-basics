//typedef is used to creat a key name. if u want to access a structure then u can use only the keyword wherever.
#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct //same as union, but in printf we can print the any ine value at a time
{
    char name[15];
    int age;
}person;
int main()
{
    person var;
    strcpy(var.name,"Sudharsan.");
    var.age=24;
    printf("\nName\t\tAge");
    printf("\n%s\t%d",var.name,var.age);
    return 0;
}

//passing whole structure to fucntion.
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int rollnum;
    int mark;
};
void printstr(struct student);
int main()
{
    struct student s={"Sudharsan",12345,99};
    printstr(s);
    return 0;
}
void printstr(struct student s1)
{
    printf("\nName   :%s",s1.name);
    printf("\nRollnum:%d",s1.rollnum);
    printf("\nMark   :%d",s1.mark);
}


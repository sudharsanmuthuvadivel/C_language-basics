//passing structure pointer to fucntion.
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];//structure members
    int rollnum;
    int mark;
};
void printstr(struct student*);
int main()
{
    struct student s={"Sudharsan",12345,99};
    struct student *sp;
    sp=&s;
    printstr(sp);// or without using pointer directly passing address of struct like &s and reciving by pointer *p 
    return 0;
}
void printstr(struct student *p)
{
    printf("\nName   :%s",p-> name);
    printf("\nRollnum:%d",p-> rollnum);
    printf("\nMark   :%d",p->mark);
}


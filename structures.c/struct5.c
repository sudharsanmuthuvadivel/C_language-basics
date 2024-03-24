//returning stucture as pointer to main func.

#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];//structure members
    int rollnum;
    int mark;
};
struct student *creatstr(char [],int,int);
int main()
{
    struct student *p;
    p=creatstr("Sudharsan",12345,99);
    printf("\nName   :%s",p->name);
    printf("\nRollnum:%d",p->rollnum);
    printf("\nMark   :%d",p->mark); 
    return 0;
}
struct student *creatstr(char name[],int rollnum,int mark)
{ 
    static struct student s;//s is local variable so when the fucntion close data deleted in memory .so we r using static
    strcpy(s.name,name);
    s.rollnum=rollnum;
    s.mark=mark;
    return &s;
}


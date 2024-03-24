//returning stucture to main func.

#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];//structure members
    int rollnum;
    int mark;
};
struct student creatstr(char [],int,int);
int main()
{
    struct student s1;
    s1=creatstr("Sudharsan",12345,99);
    printf("\nName   :%s",s1.name);
    printf("\nRollnum:%d",s1.rollnum);
    printf("\nMark   :%d",s1.mark); 
    return 0;
}
struct student creatstr(char name[],int rollnum,int mark)
{ 
    struct student s;
    strcpy(s.name,name);
    s.rollnum=rollnum;
    s.mark=mark;
    return s;
}


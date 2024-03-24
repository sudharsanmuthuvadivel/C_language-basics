//passing structure variable to function.
#include<stdio.h>
#include<conio.h>
void printstr(char name[],int,int);
int main()
{//structure defenition
    struct student{//student is structure name or tag name
        char name[20];
        int rollnum;
        int mark;
    };
    //structure variable decleration.
    struct student s1={"sudharsan",123,99};
    printstr(s1.name,s1.rollnum,s1.mark);//func calling.
    return 0;
}
void printstr(char name[],int rollnum,int mark)
{
    printf("\nName      : %s",name);
    printf("\nRollnumber: %d",rollnum);
    printf("\nMark      : %d",mark);
}
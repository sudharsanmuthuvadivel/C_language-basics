//storing roll number of the student in array.
#include<stdio.h>
#include<stdlib.h>
#define Num_student 6
int main()
{
    int rollnumber[Num_student],i;
    for (i=0;i<Num_student;i++)
    {
    printf("\nEnter the %d th student rollnumber:",i);
    scanf("%d",&rollnumber[i]);
    }

    for(i=0;i<Num_student;i++)
    {
        printf("\n%dth student roll number is %d:",i,rollnumber[i]);
    }
    return 0;
}
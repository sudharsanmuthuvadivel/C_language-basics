/* #Storing the students marks using array with data poiter
# calloc allocate the memory space in heep memory 
# stack memory store the local variable like inside the main function variable.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *marks, i, length;//*marks is a data pointer,that stored the 1st address of allocatted heap memory addess .
    printf("\nEnter the number of subject:");//6
    scanf("%d",&length);
    marks=(int*) calloc(length,sizeof(int));//(6*4=24 byts are allocated in heep)
    
    if (marks==NULL)
    {
        printf("\nMemory is not allocated.");
    }
    else
    {
        for (i=0; i<length; i++)
        {
             printf("\nEnter the %d subject mark:", i+1);
            scanf("%d", &marks[i]);
        }
    }
    for (i=0; i<length; i++)
    {
        printf("\n%d",marks[i]);
    }
        free(marks);
        return 0;       
}
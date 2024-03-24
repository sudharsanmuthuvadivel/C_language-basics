//Getting rollnumber and subject marks using multidimensional array.
#include<stdio.h>
#include<stdlib.h>
#define Num_row 5
#define Num_cloumn 4

int main()
{
    int data[Num_row][Num_cloumn];
    int i,j;//i=row(outer loop),j=column(inner loop).
    for(i=0; i<Num_row; i++)
    {
        for(j=0; j<Num_cloumn; j++)
        {
            if (j==0)
            {
                printf("\nPlease entert the Roll.no of the student %d:",i+1);//for 1st student.
            }
            else
            {
                printf("\nPlease entert the mark of the student %d,in the subject %d:",i+1,j);
            }
            scanf("%d",&data[i][j]);
        }
    }
    printf("\nRollNo\tSub1\tSub2\tSub3\n");
    for (i=0; i<Num_row; i++)
    {
        printf("%d\t%d\t%d\t%d\n",data[i][0],data[i][1],data[i][2],data[i][3]);
    }
    return 0;
}
//finding acsending order in array by using function.
#include<stdio.h>
#define SIZE 5
void ascending(int []);
void main()
{
    int array[SIZE],i,j,callfunc[SIZE];
    
    printf("\nEnter the %d element:",SIZE);
    for (i=0; i<SIZE; i++)
        scanf("\n%d",&array[i]);
    //function calling
    ascending(array);
    
    printf("\nThe ascending order array is:");
    for (j=0; j<SIZE; j++)
    {
        printf("%d\t",array[j]);
    }
    
    
}
void ascending(int a[])
{
    int i,j,temp[SIZE];
    for (i=0;i<SIZE;i++)
    {
        for (j=i+1;j<SIZE;j++)
        {
            if(a[i]>a[j])
            {
                temp[i]=a[i];
                a[i]=a[j];
                a[j]=temp[i];
            }
    
        } 
    } 
}
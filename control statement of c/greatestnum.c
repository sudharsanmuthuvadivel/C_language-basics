// find greatest number in given array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int greatest=0,idex; 
    int list[]={12,34,56,234,12,34,560};
    for (idex=0;idex<7;idex++)
    {
        if (greatest<list[idex])
        {
            greatest=list[idex];
        }
    }
    printf("\nthe greatest number is:%d",greatest);
    return 0;
}
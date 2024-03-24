#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char* p;
    int length;
    puts("Enter the length of the string:");
    scanf("%d",&length);
    p = (char*) malloc(sizeof(char)*length+1);
    if (p==NULL)
    puts("\nMemory is not available.");
    else 
    {
        fflush(stdin);
        puts("\nEnter the string.");
        gets(p);
        puts(p);
        free(p);
    }
    return 0;
}
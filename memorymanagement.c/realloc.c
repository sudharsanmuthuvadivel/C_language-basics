/*Realloc is used for increase or decrease the memory sapce in heap*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str=malloc(12);
    if (str==NULL)
    printf("\nUnable to create the memory");
    else{
        strcpy(str,"Hi sudharsan");
        puts(str);

        str=(char*) realloc(str,30);//realloc create new memory space in heap location,but alread allocated space are exist.
        strcat(str," Have a nice night.");
        puts(str);
        free(str);
    }
    
    return 0;
}
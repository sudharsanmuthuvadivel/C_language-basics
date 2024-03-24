/*memchr is used to find the character in a string.
memchr(sourcefile,charcter,length for end)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char data[]="Hi sudharsan Have a nice day.";
    char *p;
    char search='z';

    p=(char*)memchr(data,search,sizeof(data));
    if (p!=NULL)
    puts(p);
    else
    puts("That character not in string.");
    return 0;

}
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i=0;
    char a[]="Hello World";
    char* ap="Have a nice day";

    while (a[i])
    {
        printf("address:%x\tchar:%c\n",a+i,a[i]);
        i++;
    }

    while (*ap)
    {
        printf("addr:%x\tchar:%c\n",ap,*ap);
        ap++;
    }
    return 0;
}
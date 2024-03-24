#include<stdio.h>
#include<string.h>
int main()
{
    char c[10],a[10];
    char x[10]={'R','A','M','\0'};
    char y[10]={'k','u','M','A','R','\0'};
    printf("Enter the string:");
    gets(c);// using sapce between two words "gets are used"
    printf("\ncompare:%d",strcmp(x,c));
    printf("\ncopy   :%s",strcpy(a,c));
    strcat(x,y);
    printf("\nconcatenation:%s",x);
    return 0;
}
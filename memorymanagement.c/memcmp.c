/*memcmp is used to compare both the string and tell about how many characters are same from starting in both string.
memcmp(str1,str2,length)

result vqlue is =0 (both string are same)
                <0 (str1 lessthan str2)
                >0 (str1>str2)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int length,strlen1,strlen2,result;
    char str1[]="Hi sudhar";
    char str2[]="Hi sudharsan have a nice day";
    strlen1=strlen(str1);
    strlen2=strlen(str2);
    length= strlen1 <= strlen2 ? strlen1:strlen2;//finding smallest length
    result=memcmp(str1,str2,length);
    if (result==0)
        printf("\nFirst %d characters are same in both string.",length);
    else
        printf("\nFirst %d characters are not same in both string.",length);
    return 0;
}
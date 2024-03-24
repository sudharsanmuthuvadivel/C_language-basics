#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str1="abcdouhr f!@#***";
    char *str2="abcd";
    char *str3="*";
    printf("\n%u",strspn(str1,str2));//how much no of character are same in str1 and str2
    printf("\n%u",strspn(str1+2,str2));//how much no of character are same in after the 2nd index of str1
    printf("\n%u",strcspn(str1,str3));//str3 chacter position in str1 
    printf("\n%u",strcspn(str1+2,str3));//str3 chacter position in str1 from the 2nd index.
    return 0;
}
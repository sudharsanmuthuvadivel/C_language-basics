#include<stdio.h>
int main()
{
    //char str[]="Hello World!;
    char s1[50],s2[50];
    printf("\nEnter the 1st string:");
    gets(s1);//scanf("%s",&s1);
    printf("\nEnter the 2st string:");
    gets(s2); //like scanf.(geting string)
    printf("\nLength of the string s1 and s2 is:%d,%d",strlen(s1), strlen(s2));
    //printf("\nstring copy s1 %s",strcpy(s1,s2)); //strcpy(s1,s2,3) that 3 represent "1st 3 letters are copy to next string"
    //printf("\nstring cancadination s1 %s",strcat(s1,s2));
    printf("\ncomparing value of string s1 and s2 %d",strcmp(s1,s2));//strcmp(s1,s2,3) that 3 represent "1st 3 letter only allow for comparing"
    printf("\ncomparing address of string s1 and s2 %d",(s1==s2));
    printf("\ncharacter index from string%u",strchr(s1, "a"));//strchr used to find character index.
    return 0;
}//// next function are in string2.c
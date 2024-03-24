#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("\n%c is vowels",ch);
    break;
    default:
    printf("\n%c is not a vowel");
    }
    return 0;

}
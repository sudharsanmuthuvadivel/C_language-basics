#include<stdio.h>
#include<string.h>
int main()
{
    char c[10];
    printf("Enter the string:");
    gets(c);// using sapce between two words "gets are used"
    printf("\n length   :%d",strlen(c));
    printf("\n Reverse  :%s",strrev(c));
    printf("\n uppercase:%s",strupr(c));
    printf("\n lowercase:%s",strlwr(c));
    return 0;
}





// int main()
// {
//     char c[10];
//     printf("Enter the string:");
//     gets(c);// using sapce between two words "gets are used"
//     // scanf("%s",c);//for array variable "&" dont need
//     printf("%s",c);
// }
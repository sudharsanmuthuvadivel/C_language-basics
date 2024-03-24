#include<stdio.h>
int main()
{
    int amt;
    printf("\nEnter the amount of withdraw:");
    scanf("%d",&amt);
    printf("\nRequired notes for Rs100 :%d",(amt/100));
    printf("\nRequired notes for Rs50  :%d",((amt%100)/50));
    printf("\nRequired notes for Rs10  :%d",(((amt%100)%50)/10));
    printf("\nRequired notes for remain:%d\n\n",(((amt%100)%50)%10));
    return 0;
}
// 
// #include<stdio.h>
// int add(int a, int b);
// float div(int a, int b);
// int main()
// {
//     int c=add(10,20);
//     float d= div(101,20);
//     printf("the sum is %d\n",c);
//     printf("the division is %0.2f\n",d);
//     return 0;
// }
// int add(int a, int b)
// {
//     int c=a+b;
//     return c;
// }
// float div(int a, int b)
// {
//     float d= (float)a/(float)b;
//     return d;
// }









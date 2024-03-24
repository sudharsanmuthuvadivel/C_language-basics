#include<stdio.h>
#include<conio.h>
//...............call by reference
void incr(int *p);
int main()
{
    int a=7;
    incr (&a);
    printf("%d",a);
}
void incr(int *p)
{
    (*p)++;
}
// ............call by value
//void incr(int);
//int main()
//{
  //  int a=7;
    //incr(a);
    //printf("%d",a);
//}
//void incr(int num)
//{
  //  num++;
//}
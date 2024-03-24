#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=1;
    int* p=&a;
    *p=6;//access the data stored in a
    int** q=&p;
    int*** r=&q;
    printf("\n%d",&a);//address of a
    printf("\n%d",*p);//data stored in a.
    printf("\n%d",*q);//poniter p data (address of a ).
    printf("\n%d",**q);//data in *p.(data stored in a).
    printf("\n%d",*r);//address of poniter q.
    printf("\n%d",**r);//data stored in q nothing but data in p.
    printf("\n%d",***r);//data in **q
    ***r=10;           //data changing.  
    printf("\n%d",a);
    
    return 0;
}
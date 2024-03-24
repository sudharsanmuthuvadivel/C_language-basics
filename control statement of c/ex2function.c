// swapping using function and pointer
#include<stdio.h>
void swap(int*,int*);
int main(void)
{
    int n1,n2,afterswap;
    printf("\nENter the two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("\nBefore swaping:n1=%d N2=%d",n1,n2);
    swap(&n1,&n2);
    printf("\nAfter swaping:n1=%d N2=%d",n1,n2);
    return 0;
}
void swap (int* n1,int* n2)//10,20
{
   /*int temp;
    temp=n1;
    n1=n2;
    n2=temp;*/ 
    // 2nd metheod of without using 3rd variable.
    *n1=*n1+*n2;//30
    *n2=*n1-*n2;//30-20=10(new)
    *n1=*n1-*n2;//30-10=20(new)

}


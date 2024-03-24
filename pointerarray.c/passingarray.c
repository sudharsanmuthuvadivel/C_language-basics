#include<stdio.h>

int arraysum(int []);
int main()
{
    int a[5],i,sum;
    printf("\nEnter the 5 element:");
    for (i=0;i<5;i++)
    
        scanf("\n%d",&a[i]);
        sum=arraysum(a);
        //printf("\n%d",a);
        return 0;
    
}
    int arraysum(int a[])
    {
        int i,sum=0;
        for(i=0;i<5;i++)
        {
            sum=sum+a[i];
            
        }
        return sum;
    }

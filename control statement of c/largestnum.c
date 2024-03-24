#include<stdio.h>

void main()
{
int i,n,larg,a[20];
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the array elements:");
for (i=0;i<n;i++)
{
    printf ("\nEnter the element:");
    scanf("%d",&a[i]);
}
printf("\n the array elements is:");
for (i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}
larg=a[0];
for(i=1;i<n;i++)
{
    if (a[i]>larg)
    {
        larg=a[i];
    }
}
printf("\n Largest number is:%d",larg);
}

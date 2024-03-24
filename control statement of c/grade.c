#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("\n Enter the 5subject marks:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=(total/5);
    printf("\n Total mark  :%d",total);
    printf("\n Average mark:%f",average);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\n Result:Pass");
        if(average>=90&&average<=100)
        {
            printf("\n Grade: A");
        }
        else if(average>=80&&average<=89)
        {
            printf("\n Grade: B");
        }
        else if(average>=70&&average<=79)
        {
            printf("\n Grade: C");
        }
        else
        {
            printf("\n Grade: D");
        }
    }
    else{
        printf("\n Result:fail");
        printf("\n Grade: No grade");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    float km,me,fe,inc,centi;
    printf("\nEnter the distance in km:");
    scanf("%f",&km);
    printf("\ntotaldistance:%0.2f",km);
    me=(km*1000);
    printf("\ndistance in meter:%0.2f",me);
    fe=(km*3280.84);
    printf("\ndistance in feet:%0.2f",fe);
    inc=(km*39370.1);
    printf("\ndistance in inches:%0.2f",inc);
    centi=(km*100000);
    printf("\ndistance in centimeter:%0.2f",centi);
    return 0;
}
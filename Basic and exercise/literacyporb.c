#include<stdio.h>
int main()
{
    int pop,popmen,popwomen,poplit,litmen,litwomen,iltmen,iltwomen;
    pop=80000;
    popmen=(52*pop)/100;
    popwomen=pop-popmen;
    poplit=(48*pop)/100;
    litmen=(35*pop)/100;
    litwomen=poplit-litmen;
    iltmen=popmen-litmen;
    iltwomen=popwomen-litwomen;
    printf("\npopulation     :%d",pop);
    printf("\npop of men     :%d",popmen);
    printf("\npop of women   :%d",popwomen);
    printf("\npop of lit     :%d",poplit);
    printf("\npop of litmen  :%d",litmen);
    printf("\npop of litwomen:%d",litwomen);
    printf("\npop of iltmen  :%d",iltmen);
    printf("\npop of iltwomen:%d",iltwomen);
    return 0;
}
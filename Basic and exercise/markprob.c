#include<stdio.h>
int main()
{
   int t,e,m,s,ss,tm;
   float percent;
   printf("\nEnter the marks:");
   scanf("%d%d%d%d%d",&t,&e,&m,&s,&ss);
   tm=t+e+m+s+ss;
   printf("\ntotal mark:%d",tm);
   percent=(tm/500)*100;
   printf("\npercentagemark:%0.2f",percent);
    return 0;

}
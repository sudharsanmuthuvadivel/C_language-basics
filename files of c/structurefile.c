#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    int Roll_no;
    char Name[30];
    double Mark;
};
int main()
{
    char ch[4];
    struct student s1,s2;
    FILE *fp=fopen("abc.txt","w+");
    if (fp==NULL)
    {
        printf("\nFile unable to open.");
        return 1;
    }
   while(1)
   {
    
    printf("\nEnter the Roll number:");
    scanf("%d",&s1.Roll_no);
    printf("Enter the Name:");
    scanf("%s",&s1.Name);
    printf("Enter the Mark:");
    scanf("%lf",&s1.Mark);
    fprintf(fp,"%d\t%s\t%lf\n",s1.Roll_no,s1.Name,s1.Mark);
    printf("countinue (Yes/No):");
    char ch= getch();
    if (ch=='n' || ch=='N')
        break;
   } 
   fclose(fp);
   return 0;
}

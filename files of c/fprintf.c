#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    printf("\nEnter your name:");
    gets(name);
    printf("\nEnter your age:");
    scanf("%d",&age);
    
    fp=fopen("abc.txt","a");
    if (fp==NULL)
    {
        printf("\nFile unable to open.");
    }
    else {
        
        fprintf(fp,"\n%s\t%d",name,age);
        printf("\nData was written successfully.");
    }
    fclose(fp);
    return 0;

}
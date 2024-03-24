#include<stdio.h>
#include<conio.h>
int main()
{      //fscanf(fp,data specifier,storing location);
    FILE *fp;
    float age;
    char name[25];
    fp=fopen("abc.txt","r");

    if (fp==NULL)
    {
        printf("\nUnable to open the file.");
    }
    else{
        fscanf(fp,"%s\t%f",name,&age);
        printf("\n%s\t%f",name,age);
        printf("\nfile scanned successfully.");
    }
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main()
{
    char str1[100];
    FILE *fp;
    //fp=fopen("abc.txt","r");
    //fputc('h',fp);
    fp=fopen("abc.txt","a");
    //printf("\n%c",getc(fp));
    //fgets(str1,30,fp);//get a string from file.(stored loc,limit,source file)
    //printf("\n%s",str1);

    //put string in the file
    if (fp==NULL)
    {
        printf("\nUnable to open the file");
    }
    else{
        printf("\n file open successfully, Enter the string:");
        gets(str1);
        fputs(str1,fp);//put string in the file 
    }
    printf ("%c",str1);
    fclose(fp);
    return 0;
}
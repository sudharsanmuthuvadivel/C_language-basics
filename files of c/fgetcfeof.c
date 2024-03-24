#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("abc.txt","r");
    if (fp==NULL)
    {
        //printf("\nUnable to open the file.");
        perror("\nError in opening file.");
    }
        else 
        {
            while (!feof(fp))
            {
                c=fgetc(fp);
                printf("%c",c);
            }
            
        }
    fclose(fp);
    return 0;
}
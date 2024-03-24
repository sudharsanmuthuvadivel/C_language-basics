#include<stdio.h>
#include<conio.h>
int main()
{         /// rewind(fp) crusor move again starting position.
    FILE*fp=fopen("abc.txt","r");
   
        while (!feof(fp))
        {
        putchar(getc(fp));
        }
        rewind(fp);
        //printf("\n");
        while (!feof(fp))
        {
        putchar(getc(fp));
        }
    fclose(fp);
    return 0;
}
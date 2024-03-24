#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{                   //// creating temporary file tempfile()

    FILE *fp=tmpfile();
    char data[]="Hello sudharsan, Have a nice day.";
    int lenght=strlen(data);
    int counter=-1;
    if (fp != NULL)
    printf("\ntemporary file was created.\n");
    while(++counter<lenght)
    {
        fputc(data[counter],fp);
    }rewind(fp);
    while (!feof(fp))
    {
        putchar(getc(fp));
    }
    fclose(fp);
    return 0;
}
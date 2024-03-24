#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    //fgets(storing location,length,fp);
     char data[50];


    fp=fopen("abc.txt","r");
   if (fp==NULL)
   {
    printf("\nFILE unable to open.");
   }
   else{
    while(!feof(fp))
    {
        fgets(data,25,fp);
        printf("\n%s",data);
    }

   }
    fclose(fp);
    return 0;
}
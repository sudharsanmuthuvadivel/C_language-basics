#include<stdio.h>
#include<conio.h>
int main()
{
    //syntax to delete a file
    //variable= remove(fp);
    // if return value 0--> file deleted successfully
    //                 otherwise-->Error.
    int status;
    status=remove("abc.txt");//if you want u can delete a file using path but if file in the same folder.
    printf("\n%d",status);
    if (status==0)
    {
        puts("\nfile deleted successfully");
    }
    else
    {
        puts("\nError");
    }
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char sentance[]="She is beautifull.";
    char *word=strtok(sentance," .");
    //printf("\n%s",word);
    //char *secondWord=strtok(NULL," .");
    //printf("\n%s",secondWord);
    while (word !=NULL)
    {
        printf("\n%s",word);
        word=strtok(NULL," .");
    }
    return 0;
}
/*split the sentence */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("\nEnter the string:");
    scanf("%[^\n]", s);//scan entire string

    char **words = malloc(200 * sizeof(char));//assume maximum 100 words
    int words_count = 0;

    char *token = strtok(s, " ");//token the string.
    while (token != NULL)
    {
        words[words_count] = malloc(strlen(token) + 1);//create memory space as per token length
        strcpy(words[words_count], token);//copy the token string to words
        words_count++;
        token = strtok(NULL, " ");//token move to next sentence
    }

    for (int i = 0; i < words_count; i++)
    {
        printf("%s\n", words[i]);//print the all the string token.
    }

    for (int i = 0; i < words_count; i++)
    {
        free(words[i]);//deallocation of heap memory
    }
    free(words);//deallocation.
    free(s);//deallocation.
    return 0;
}
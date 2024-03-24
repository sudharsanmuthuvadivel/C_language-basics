/*finding digit freqency from string.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    printf("\nEnter the string:");
    scanf("%[^\n]", s);
    int digitCount[10] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digitCount[s[i] - '0']++; // convert character to integer.
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", digitCount[i]);
    }
    return 0;
}
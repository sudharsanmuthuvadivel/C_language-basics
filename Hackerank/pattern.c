

#include <stdio.h>

int main()
{
    int n; // Input value
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int size = 2 * n - 1; // Size of the pattern

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j ? min : size - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}

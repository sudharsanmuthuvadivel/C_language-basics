// array reversal using malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, limit;
    printf("\nEnter the Limit:");
    scanf("%d", &limit);

    if (limit <= 0)
    {
        printf("\nInvalid Number, Please Enter the valid Positive number.");
        return 1;
    }

    int *arr = (int *)malloc(limit * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory Allocation Failled.");
        return 1;
    }

    printf("\nEnter the %d elements:", limit);
    // elements storing in array
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    // array reversal.
    for (i = limit - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int limit, sum = 0; 
    printf("\nEnter the limit:");
    scanf("%d", &limit);

    int *arr=(int*)malloc(limit*sizeof(int));

    printf("\nEnter the %d elements:", limit);
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    // for (int i = 0; i < limit; i++)
    // {
    //     printf("\t%d", arr[i]);
    // }
    printf("%d", sum);
    return 0;
}
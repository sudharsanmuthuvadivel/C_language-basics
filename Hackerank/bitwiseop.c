#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int And = i & j;
            int Or = i | j;
            int Xor = i ^ j;

            if (And < k && And > maxAnd)
                maxAnd = And;

            if (Or < k && Or > maxOr)
                maxOr = Or;

            if (Xor < k && Xor > maxXor)
                maxXor = Xor;
        }
    }
    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d\n", maxXor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

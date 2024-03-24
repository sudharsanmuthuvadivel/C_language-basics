#include <stdio.h>
#include <string.h>

int solution(char *S)
{
    int T = 0; // Initialize the count of water tanks
    int N = strlen(S);
    int count = 0;
    int tankPosition[]={0};

    if (N > 20)
    {
        return -1;
    }

    for (int i = 0; i < N; i++)
    {
        int next;
        int prev;
        int prevCount = 0;
        int nextCount = 0;
        for (int j = 0; j < count; j++)
        {
            if (tankPosition[j] == i - 1)
                prevCount += 1;
        }
        if (prevCount > 0)
        {
            prev = 1;
        }

        else
        {
            prev = 0;
        }
        for (int j = 0; j < count; j++)
        {
            if (tankPosition[j] == i + 1)
                nextCount += 1;
        }
        if (nextCount > 0)
        {
            next = 1;
        }

        else
        {
            next = 0;
        }

        if (S[i] == 'H')
        {
            if (S[i - 1] != '-' && S[i + 1] != '-')
            {
                T = -1;
                break;
            }

            if (S[i + 1] == '-')
            {
                // printf("\n next%d prev%d", next, prev);
                if (next == 0 && prev == 0)
                {
                    T += 1;
                    tankPosition[count] = i + 1;
                    count += 1;
                }
                else
                    continue;
            }
            else if (S[i - 1] == '-' && prev == 0)
            {

                T += 1;
                tankPosition[count] = i - 1;
                count += 1;
            }
            else if (S[i + 1] == '-' && next == 0)
            {
                T += 1;
                tankPosition[count] = i + 1;
                count += 1;
            }
        }
    }

    return T;
}

int main()
{
    char S1[20] = "-H-HH--"; // 2
    printf("\nExample 1 %d\n", solution(S1));

    char S2[20] = "-----------------H-"; //-1
    printf("Example 2 %d\n", solution(S2));

    char S3[20] = "HH-HH"; //-1
    printf("Example 3 %d\n", solution(S3));

    char S4[20] = "-H-H-HH-HH-H"; // 3
    printf("Example 4 %d\n", solution(S4));
    return 0;
}
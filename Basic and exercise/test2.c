#include <stdio.h>
#include <string.h>

int solution(char *S)
{
    int T = 0; // Initialize the count of water tanks
    int N = strlen(S);
    int count = 0;
    int tankPosition[count];

    if (N > 20)
    {
        return -1;
    }

    int findIndex(int index, int arr[], int length)
    {
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == index)
                count += 1;
        }
        if (count > 0)
            return 1;
        else
            return 0;
    }
    for (int i = 0; i < N; i++)
    {

        int prev = findIndex(i - 1, tankPosition, count);
        int next = findIndex(i + 1, tankPosition, count);
        if (S[i] == 'H')
        {
            if (S[i - 1] != '-' && S[i + 1] != '-')
            {
                T = -1;
                break;
            }

            if (S[i + 1] == '-')
            {

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
    char S1[20] = "-H-HH--";//2
    printf("Example 1 %d\n", solution(S1)); 

    char S2[20] = "H";//-1
    printf("Example 2 %d\n", solution(S2)); 

    char S3[20] = "HH-HH";//-1
    printf("Example 3 %d\n", solution(S3)); 

    char S4[20] = "-H-H-H-H-H";//3
    printf("Example 4 %d\n", solution(S4)); 
    return 0;
}
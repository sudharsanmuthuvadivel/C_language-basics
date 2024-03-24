#include <stdio.h>
#include <conio.h>
int *creat_position()
{

    static int Tindex[20] = {1, 2, 4, 0};
    return &Tindex[0];
}
int main()
{
    int *p = creat_position();
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", p[i]);
        if (p[i + 1] == 0)
            break;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int Find_index(int index, int arr[], int length)
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
int creat_position(int Tindex[], int position)
{
    int count = 0;
    Tindex[count] = position;
    count += 1;
   
}
int main()
{
    int number_array[] = {};
    int length = sizeof(number_array) / sizeof(number_array[0]);
    // int dummy_var = Find_index(2, number_array, length);
    // printf("\ndummy variable %d", dummy_var);
    int variable = creat_position(number_array, 3);
    variable = creat_position(number_array, 4);
    variable = creat_position(number_array, 5);
    variable = creat_position(number_array, 8);
    variable = creat_position(number_array, 1);
    
    for (int i=0; i<20; i++)
    {
       printf( "*(variable + %d) : %d\n", i, *(variable + i)); 
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void numToWord(int );
int main() 
{ 
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int i=a; i<=b; i++)
    {
        if (i<=9){
            numToWord(i);
        }
        else if(i % 2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
void numToWord(int num)
{
  char *word[]={"zero", "one", "two","three","four","five","six","seven","eight","nine"};
  printf("%s\n",word[num]);
}


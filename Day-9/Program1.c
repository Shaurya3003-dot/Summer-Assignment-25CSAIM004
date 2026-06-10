//to print reverse star pattern
#include <stdio.h>
int main()
{
    int N=5;
    for(int i =0; i < N; i++)
    {
        for(int j = 0; j < N-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
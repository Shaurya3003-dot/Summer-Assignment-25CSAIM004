//to print reverse number triangle
#include <stdio.h>
int main()
{
    int N=5;
    for(int i =0; i < N; i++)
    {
        for(int j = 0; j < N-i; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}
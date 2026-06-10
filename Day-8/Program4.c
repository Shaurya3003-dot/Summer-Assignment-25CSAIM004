//to print repeated number pattern
#include <stdio.h>
int main()
{
    int N = 5;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
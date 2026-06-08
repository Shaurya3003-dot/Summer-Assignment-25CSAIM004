//to count set bits (which is represented by the number 1) in a number
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number:");
    scanf("%d", &N);
    int count = 0;
    while(N>0)
    {
        if(N%2==1)
        {
            count=count + 1;
        }
        N=N/2;
    }
    printf("Number of set bits: %d", count);
    return 0;
}
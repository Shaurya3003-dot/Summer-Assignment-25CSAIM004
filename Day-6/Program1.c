//to convert a decimal number into binary number
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a decimal number:");
    scanf("%d", &N);
    int ans = 0;
    int pow = 1;
    while (N > 0)
    {
        int rem = N % 2;
        ans = ans + rem * pow;
        pow = pow * 10;
        N = N / 2;
    }
    printf("Binary number: %d", ans);
    return 0;
}
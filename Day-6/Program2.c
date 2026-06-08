//to convert a binary number into decimal number
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a binary number:");
    scanf("%d", &N);
    int ans = 0;
    int pow = 1;
    while(N>0)
    {
        int rem = N%10;
        ans = ans + rem*pow;
        pow = pow *2;
        N = N/10;
    }
    printf("Decimal number: %d", ans);
    return 0;
}
//to find the reverse number via using recursive method
#include <stdio.h>
#include <math.h>
int Reverse(int n)
{
    if (n<10)
    {
        return n;
    }
    else
    {
        return (n % 10) * pow(10, (int)log10(n)) + Reverse(n / 10);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Reverse of %d is %d", N, Reverse(N));
    return 0;
}    
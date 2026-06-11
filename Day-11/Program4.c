//to write a function to find the factorial of a number
#include <stdio.h>
int Factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Factorial of %d is= %d", N, Factorial(N));
    return 0;
}
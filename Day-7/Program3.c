//to print sum of digits via using recursive method
#include<stdio.h>
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10) + Sum(n/10);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of digits of %d is: %d", N, Sum(N));
    return 0;
}
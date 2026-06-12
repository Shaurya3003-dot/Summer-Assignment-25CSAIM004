//to write a function for fibonacci series
#include<stdio.h>
int Fibonacci(int n)
{
    int a=0, b=1, c;
    printf("Fibonacci series: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);
    Fibonacci(N);
    return 0;
}
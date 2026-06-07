//to find Nth term Fibonacci term
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the term number to find: ");
    scanf("%d", &N);
    int a=0, b=1,c;
    if(N == 1)
        printf("The %dth term is: %d", N, a);
    else if(N == 2)
        printf("The %dth term is: %d", N, b);
    else
    {
        for(int i=3; i<=N; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth term is: %d", N, c);
    }
    return 0;
}
//to print fibonacci series via using recursive method 
#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;   
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);   
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Fibonacci series up to %d terms:\n", N);
    for(int i=0; i<N; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
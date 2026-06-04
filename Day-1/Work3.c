#include<stdio.h>
int main()
{
    int N;
    printf("Enter value of N: ");
    scanf("%d",&N);
    int fact=1;
    for(int i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",N,fact);
    return 0;
}    
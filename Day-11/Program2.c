//to write a function to find the maximum number
#include <stdio.h>
int Max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int N1,N2;
    printf("Enter first number: ");
    scanf("%d", &N1);
    printf("Enter second number: ");
    scanf("%d", &N2);
    printf("Maximum number among the two numbers is= %d", Max(N1, N2));
    return 0;
}
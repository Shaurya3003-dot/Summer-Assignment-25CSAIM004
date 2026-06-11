//to write function to find the sum of two numbers
#include <stdio.h>
int Sum(int a, int b) {
    return a + b;
}
int main()
{
    int N1,N2;
    printf("Enter first number: ");
    scanf("%d", &N1);
    printf("Enter second number: ");
    scanf("%d", &N2);
    printf("Sum = %d", Sum(N1, N2));
    return 0;
}
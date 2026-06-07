//to check Armstrong number
#include <stdio.h>
int main()
{
    int N;
    printf("Enter any number: ");
    scanf("%d", &N);
    int originalNum = N;
    int rem, result = 0;
    while (originalNum != 0)
    {
        rem = originalNum % 10;
        result += rem * rem * rem;
        originalNum /= 10;
    }
    if (result == N)
        printf("%d is an Armstrong number.", N);
    else
        printf("%d is not an Armstrong number.", N);
    return 0;
}
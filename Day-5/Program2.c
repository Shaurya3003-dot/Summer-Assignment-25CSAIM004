//to check strong number (number that is equal to the sum of the factorial of its digits)
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int sum = 0;
    int temp = N;
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    
    if (sum == N) {
        printf("%d is a strong number.\n", N);
    } else {
        printf("%d is not a strong number.\n", N);
    }
    return 0;
}
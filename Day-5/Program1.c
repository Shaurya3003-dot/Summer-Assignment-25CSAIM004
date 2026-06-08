//to check perfect number  (number that is equal to the sum of its proper divisors)
#include <stdio.h>
int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    
    if (sum == N) {
        printf("%d is a perfect number.\n", N);
    } else {
        printf("%d is not a perfect number.\n", N);
    }
    return 0;
}
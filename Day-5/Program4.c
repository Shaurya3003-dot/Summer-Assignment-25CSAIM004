//to find the largest prime factor
#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int largFact = 1;
    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            largFact = i; 
            N /= i; 
        }
    }   
    if (largFact != -1) {
        printf("The largest prime factor is: %d\n", largFact);
    } else {
        printf("No prime factors found.\n");
    }
    
    return 0;
}
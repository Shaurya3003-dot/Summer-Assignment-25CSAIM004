//to print Armstrong Numbers in range
#include <stdio.h>
int main()
{
    int low, upp;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &low, &upp);
    printf("Armstrong numbers between %d and %d are: ", low, upp);
    for (int N= low; N <= upp; N++)
    {
        int originalNum = N;
        int rem, result = 0;
        while (originalNum != 0)
        {
            rem = originalNum % 10;
            result += rem * rem * rem;
            originalNum /= 10;
        }
        if (result == N)  
            printf("%d ", N);
    }
    return 0;
}
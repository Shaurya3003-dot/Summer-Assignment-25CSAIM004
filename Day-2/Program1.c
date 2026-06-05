//to find sum of digits of a number
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int sum=0;
    while (N > 0)
    {
        int rem = N % 10; 
        sum=sum + rem;   
        N=N/10;     
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
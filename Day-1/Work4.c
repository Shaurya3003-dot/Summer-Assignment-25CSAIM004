#include<stdio.h>
int main()
{
    int N;
    printf("Enter value of N: ");
    scanf("%d",&N);
    int count=0;
    while(N>0)
    {
        int rem=N%10;
        count++;
        N=N/10;
    }
    printf("Number of digits in the given number is: %d",count);
    return 0;
}    
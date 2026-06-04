#include<stdio.h>
int main()
{
    int N;
    printf("Enter value of N: ");
    scanf("%d",&N);
    int Sum=0;
    for(int i=1;i<=N;i++)
    {
        Sum=Sum+i;
    }
    printf("Sum of first %d natural numbers is: %d",N,Sum);
    return 0;
}
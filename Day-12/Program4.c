// to write a function for perfect number
#include<stdio.h>
int Perfect(int n)
{
    int sum = 0;
    for(int i=1; i<n; i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Perfect(N);
    return 0;
}
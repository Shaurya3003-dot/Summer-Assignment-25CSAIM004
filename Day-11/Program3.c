//to write a function to check prime number
#include <stdio.h>
int Prime(int n)
{
    int i, count=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Prime(N);
    return 0;
}    
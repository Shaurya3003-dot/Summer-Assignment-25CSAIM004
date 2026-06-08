//to find x^n without using pow() function
#include <stdio.h>
int main()
{
    int N, x;
    printf("Enter a number:");
    scanf("%d", &N);
    printf("Enter the power of the number:");
    scanf("%d", &x);
    int ans = 1;
    for(int i=1; i<=x; i++)
    {
        ans=ans*N;
    }
    printf("The power of the Number is: %d", ans);
    return 0;
}
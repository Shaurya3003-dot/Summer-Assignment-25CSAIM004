//o pint character pyramid A ABA ABCBA
#include<stdio.h>
int main()
{
    int N=5;
    for(int i=1; i<=N;i++)
    {
        for(int j=1; j<=N-i;j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(int j=i-1; j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}
//to find the sum of diagonal 
#include <stdio.h>
int main()
{
    int m1[10][10], n, s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements of matrix:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        s=s+m1[i][i];
    }
    printf("Sum of diagonal: %d\n", s);
    return 0;
}
//to multiply the matrices 
#include <stdio.h>
int main()
{
    int m1[10][10], m2[10][10], s[10][10], n,m;
    printf("Enter rows and columns: ");
    scanf("%d", &n);
    printf("Enter elements of matrix 1:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            s[i][j]=0;
            for(int k=1; k<=n; k++)
            {
                s[i][j]=s[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
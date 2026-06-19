//to subtract matrices 
#include <stdio.h>
int main()
{
    int m1[10][10], m2[10][10], s[10][10], n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter elements of matrix 1:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            s[i][j]=m1[i][j]-m2[i][j];
        }
    }
    printf("Result of subtraction:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
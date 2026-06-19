//to find transpose of matrices 
#include <stdio.h>
int main()
{
    int m1[10][10], t[10][10], n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter elements of matrix:\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            t[j][i]=m1[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
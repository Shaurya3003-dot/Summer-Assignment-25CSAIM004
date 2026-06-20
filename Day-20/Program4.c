//to find column-wise sums 
#include <stdio.h>
int main()
{
    int m1[10][10], n, m, s;
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
    printf("Column wise sums:\n");
    for(int j=1; j<=m; j++)
    {
        s=0;
        for(int i=1; i<=n; i++)
        {
            s=s+m1[i][j];
        }
        printf("Sum of column %d: %d\n", j, s);
    }
    return 0;
}
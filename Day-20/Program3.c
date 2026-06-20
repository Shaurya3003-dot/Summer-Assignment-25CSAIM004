//to find row wise sums 
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
    printf("Row wise sums:\n");
    for(int i=1; i<=n; i++)
    {
        s=0;
        for(int j=1; j<=m; j++)
        {
            s=s+m1[i][j];
        }
        printf("Sum of row %d: %d\n", i, s);
    }
    return 0;
}
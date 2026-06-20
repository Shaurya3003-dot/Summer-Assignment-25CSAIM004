//to check symmetric matrix
#include <stdio.h>
int main()
{
    int m1[10][10], n, m, sym=1;
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
    if(n != m)
    {
        sym=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(sym==1 && m1[i][j]!=m1[j][i])
            {
                sym=0;
            }
        }
    }
    if(sym==1)
    {
        printf("Symmetric matrix\n");
    }
    else
    {
        printf("Not a symmetric matrix\n");
    }
    return 0;
}
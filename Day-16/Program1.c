//to find missing number in array
#include <stdio.h>
int main()
{
    int arr[100], n, tsum, asum=0, miss;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter the %d elements:\n", n-1);
    for(int i=1; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    tsum=(n*(n+1))/2;
    for(int i=1; i<=n-1; i++)
    {
        asum=asum+arr[i];
    }
    miss=tsum-asum;
    printf("Missing number: %d\n", miss);
    return 0;
}
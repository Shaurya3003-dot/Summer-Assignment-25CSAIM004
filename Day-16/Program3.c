//to find a pair with given sum
#include <stdio.h>
int main()
{
    int arr[100], n, tsum, found=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &tsum);
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]+arr[j]==tsum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found=1;
                break;
            }
        }
        if(found==1)
        {
            break;
        }
    }
    if(found==0)
    {
        printf("No pair found\n");
    }
    return 0;
}
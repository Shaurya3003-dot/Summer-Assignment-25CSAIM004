//to find maximum frequency in an array
#include <stdio.h>
int main()
{
    int arr[100], n, mele, mcount=0;
    printf("Enter numberb of elements:");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        int count=0;
        for(int j=1; j<=n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>mcount)
        {
            mcount=count;
            mele=arr[i];
        }
    }
    printf("Max frequency element: %d\n", mele);
    return 0;
}
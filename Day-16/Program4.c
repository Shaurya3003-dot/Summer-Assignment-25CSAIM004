//to remove duplicates in an array
#include <stdio.h>
int main()
{
    int arr[100], narr[100], n, len=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        int found=0;
        for(int j=1; j<=len; j++)
        {
            if(arr[i]==narr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            len++;
            narr[len]=arr[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for(int i=1; i<=len; i++)
    {
        printf("%d ", narr[i]);
    }
    printf("\n");
    return 0;
}
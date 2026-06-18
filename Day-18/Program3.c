//to implment binary search 
#include <stdio.h>
int main()
{
    int arr[100], n, key, low, high, mid, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &key);
    low=1;
    high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at position: %d\n", mid);
            found=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found==0)
    {
        printf("Element not found\n");
    }
    return 0;
}